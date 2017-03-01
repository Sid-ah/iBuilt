//
//  SignUpViewController.swift
//  Unity-iPhone
//
//  Created by Apprentice on 3/1/17.
//
//

import UIKit
import Firebase

class SignUpViewController: UIViewController, UIImagePickerControllerDelegate, UINavigationControllerDelegate {
    @IBOutlet var NameField: UITextField!
    @IBOutlet var EmailField: UITextField!
    @IBOutlet var PasswordField: UITextField!
    @IBOutlet var ConfirmPWField: UITextField!
    @IBOutlet var imageView: UIImageView!
    @IBOutlet var SignUpButton: UIButton!
    
    let picker = UIImagePickerController()
    var  userStorage: FIRStorageReference!
    var ref: FIRDatabaseReference!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        picker.delegate = self
        
        let storage = FIRStorage.storage().reference(forURL: "gs://ibuilt-fdc16.appspot.com")
        ref = FIRDatabase.database().reference()
        userStorage = storage.child("users")
    }
    
    @IBAction func SelectImagePressed(_ sender: AnyObject) {
        picker.allowsEditing = true
        picker.sourceType = .photoLibrary
        present(picker, animated: true, completion: nil)
        
    }
    
    func imagePickerController(_ picker: UIImagePickerController, didFinishPickingMediaWithInfo info: [String : Any]) {
        if let image = info[UIImagePickerControllerEditedImage] as? UIImage {
            self.imageView.image = image
        }
        self.dismiss(animated: true, completion: nil)
    }
    
    @IBAction func SignUpPressed(_ sender: AnyObject) {
        
        guard NameField.text != "", EmailField.text != "", PasswordField.text != "", ConfirmPWField.text != "" else { return }
        
        if PasswordField.text == ConfirmPWField.text {
            FIRAuth.auth()?.createUser(withEmail: EmailField.text!, password: PasswordField.text!, completion: { (user, error) in
                
                if let error = error {
                    let alert = UIAlertController(title: "Error", message: error
                        .localizedDescription, preferredStyle: .alert)
                    alert.addAction(UIAlertAction(title: "Okay", style: .default, handler: { (action) in
                        alert.dismiss(animated: true, completion: nil)
                    }))
                    self.present(alert, animated: true, completion: nil)
                    print("------------------------------")
                    print("------------------------------")
                    print("------------------------------")
                    print(error.localizedDescription)
                }
                
                if let user = user {
                    
                    let changeRequest = FIRAuth.auth()!.currentUser!.profileChangeRequest()
                    changeRequest.displayName = self.NameField.text!
                    changeRequest  .commitChanges(completion: nil)
                    
                    let imageRef = self.userStorage.child("\(user.uid).jpg")
                    let data = UIImageJPEGRepresentation(self.imageView!.image!, 0.5)
                    let uploadTask = imageRef.put(data!, metadata: nil, completion: { (metadata, error) in
                        if error != nil {
                            print(error!.localizedDescription)
                        }
                        imageRef.downloadURL(completion: { (url, error) in
                            if error != nil {
                                print(error!.localizedDescription)
                                let alert = UIAlertController(title: "Error", message: error?.localizedDescription, preferredStyle: .alert)
                                alert.addAction(UIAlertAction(title: "Okay", style: .default, handler: { (action) in
                                    alert.dismiss(animated: true, completion: nil)
                                }))
                                self.present(alert, animated: true, completion: nil)
                                print("------------------------------")
                                print("------------------------------")
                                print("------------------------------")
                            }
                            
                            if let url = url {
                                
                                self.ref.child("users/counter").observeSingleEvent(of: .value, with: { (snapshot) in
                                    let counter = snapshot.value as! Int
                                    
                                    let  userInfo: [String : Any] = ["uid" : user.uid,
                                                                     "full name" : self.NameField.text!,
                                                                     "urlToImage" : url.absoluteString,
                                                                     "user_id": counter]
                                    print("------------------------------")
                                    print("\(self.ref.child("counter"))")
                                    print("------------------------------")
                                    self.ref.child("users/counter").setValue(counter + 1)
                                    self.ref.child("users").child(user.uid).setValue(userInfo)
                                    print("------------------------------")
                                    print("\(self.ref.child("counter"))")
                                    print("------------------------------")
                                    
                                    let VC = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "usersVC")
                                    self.present(VC, animated: true, completion: nil)
                                })
                                
                            }
                            
                            
                        })
                        
                    })
                    
                    uploadTask.resume()
                    
                }
            })
            
        } else {
            
            let alert = UIAlertController(title: "Error", message: "Password does not match", preferredStyle: .alert)
            alert.addAction(UIAlertAction(title: "Okay", style: .default, handler: { (action) in
                alert.dismiss(animated: true, completion: nil)
            }))
            self.present(alert, animated: true, completion: nil)
            print("------------------------------")
            print("------------------------------")
            print("------------------------------")
            print("Password does not match")
            
        }
        
    }
    
}
