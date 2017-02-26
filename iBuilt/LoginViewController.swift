//
//  LoginViewController.swift
//  iBuilt
//
//  Created by Apprentice on 2/24/17.
//  Copyright © 2017 Apprentice. All rights reserved.
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
                print(error.localizedDescription)
            }
            
            if user != nil {
                let vc = UIStoryboard(name: "Main", bundle: nil).instantiateViewController(withIdentifier: "usersVC")
                
                self.present(vc, animated: true, completion: nil)
                
                
            }
        })
        
        
    }

}
