//
//  BookmarksViewController.swift
//  iBuilt
//
//  Created by Pat Needham on 2/25/17.
//  Copyright © 2017 Apprentice. All rights reserved.
//

import UIKit
import Firebase

class BookmarksViewController: UIViewController, UITableViewDelegate, UITableViewDataSource {
    
    var bookmarks = [[String: AnyObject]]()
    @IBOutlet weak var bookmarksTableView: UITableView!
    var ref: FIRDatabaseReference!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        ref = FIRDatabase.database().reference()
        let userId = FIRAuth.auth()!.currentUser!.uid
        print("userId is: \(userId)")
        self.ref.child("users/\(userId)/user_id").observeSingleEvent(of: .value, with: { (snapshot) in
            let user_id = snapshot.value as! Int
            // Do any additional setup after loading the view.
            let url = NSURL(string: "https://frozen-garden-21267.herokuapp.com/api/manuals\(user_id)")
            print("making request to url \(url?.absoluteURL)")
            var request = URLRequest(url: url! as URL)
            request.httpMethod = "GET"
            let task2 = URLSession.shared.dataTask(with: request) { data, response, error in
                let dataString = NSString(data: data!, encoding: String.Encoding.utf8.rawValue)
                let asDictionary = self.convertStringToDictionary(text: dataString! as String)
                if asDictionary != nil {
                    self.bookmarks = asDictionary!["results"] as! [[String: AnyObject]]
                    
                    self.bookmarksTableView.reloadData()
                        print("reloaded")
                }
            }
            task2.resume()
        })
    }
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return bookmarks.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = UITableViewCell()
        let theManual = bookmarks[indexPath.row]
        cell.textLabel?.text = theManual["name"] as? String
        cell.selectionStyle = .none
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        self.performSegue(withIdentifier: "bookmarksToManualSegue", sender: nil)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "bookmarksToManualSegue" {
            let destination = segue.destination as! ManualViewController
            let row = bookmarksTableView.indexPathForSelectedRow?.row
            destination.theManual = bookmarks[row!]
        }
    }
    
    func convertStringToDictionary(text: String) -> [String:AnyObject]? {
        if let data = text.data(using: String.Encoding.utf8) {
            do {
                return try JSONSerialization.jsonObject(with: data, options: []) as? [String:AnyObject]
            } catch let error as NSError {
                print(error)
            }
        }
        return nil
    }
}
