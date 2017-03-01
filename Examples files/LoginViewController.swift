//
//  LoginViewController.swift
//  Unity-iPhone
//
//  Created by Apprentice on 3/1/17.
//
//


import UIKit
import Firebase

class LoginViewController: UIViewController {
    @IBOutlet var EmailTextField: UITextField!
    @IBOutlet var PasswordTextField: UITextField!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Do any additional setup after loading the view.
    }
    
    @IBAction func HandleLogin(_ sender: AnyObject) {
        guard EmailTextField.text != "", PasswordTextField.text != "" else { return }
        
        FIRAuth.auth()?.signIn(withEmail: EmailTextField.text!, password: PasswordTextField.text!, completion: { (user, error) in
            
            if let error = error {
                
                let alert = UIAlertController(title: "Error", message: error.localizedDescription, preferredStyle: .alert)
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
                let vc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "usersVC")
                
                self.present(vc, animated: true, completion: nil)
                
                
            }
        })
        
        
    }
    
}
