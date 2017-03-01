//
//  ManualsViewController.swift
//  Unity-iPhone
//
//  Created by Apprentice on 3/1/17.
//
//

import UIKit

class ManualsViewController: UIViewController, UITableViewDelegate, UITableViewDataSource {
    
    @IBOutlet weak var manualsTableView: UITableView!
    var manuals = [[String: AnyObject]]()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        
        // Do any additional setup after loading the view.
        let url = NSURL(string: "https://frozen-garden-21267.herokuapp.com/api/manuals")
        var request = URLRequest(url: url! as URL)
        request.httpMethod = "GET"
        let task2 = URLSession.shared.dataTask(with: request) { data, response, error in
            let dataString = NSString(data: data!, encoding: String.Encoding.utf8.rawValue)
            let asDictionary = self.convertStringToDictionary(text: dataString! as String)
            if asDictionary != nil {
                self.manuals = asDictionary!["results"] as! [[String: AnyObject]]
                
                self.manualsTableView.reloadData()
                print("reloaded")
            }
        }
        task2.resume()
    }
    
    func numberOfSections(in tableView: UITableView) -> Int {
        return 1
    }
    
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return manuals.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let cell = UITableViewCell()
        let theManual = manuals[indexPath.row]
        cell.textLabel?.text = theManual["name"] as? String
        cell.selectionStyle = .none
        return cell
    }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        self.performSegue(withIdentifier: "viewManualSegue", sender: nil)
    }
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        if segue.identifier == "viewManualSegue" {
            let destination = segue.destination as! ManualViewController
            let row = manualsTableView.indexPathForSelectedRow?.row
            destination.theManual = manuals[row!]
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
