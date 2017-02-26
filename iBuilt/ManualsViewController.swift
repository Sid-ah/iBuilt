//
//  ManualsViewController.swift
//  iBuilt
//
//  Created by Pat Needham on 2/25/17.
//  Copyright © 2017 Apprentice. All rights reserved.
//

import UIKit

class ManualsViewController: UIViewController, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate {

    @IBOutlet weak var tableView: UITableView!
    @IBOutlet weak var manualsTableView: UITableView!
    @IBOutlet weak var searchBar: UISearchBar!
    
    var manuals = [[String: AnyObject]]()
    var filteredData: [String]!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        createSearchbar()

        // Do any additional setup after loading the view.
        let url = NSURL(string: "https://dbc-phase3-kenobi82403.c9users.io/api/manuals/")
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
        let searchCell = tableView.dequeueReusableCell(withIdentifier: "TableCell", for: indexPath) as UITableViewCell
        searchCell.textLabel?.text = filteredData[indexPath.row]

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
    
    
    func createSearchbar(){
        
        let searchBar = UISearchBar()
        searchBar.showsCancelButton = false
        searchBar.placeholder = "Enter your search here"
        searchBar.delegate=self
        
        self.navigationItem.titleView = searchBar
    }
    
    func searchBar(_ searchBar: UISearchBar, textDidChange searchText: String) {
        // When there is no text, filteredData is the same as the original data
        // When user has entered text into the search box
        // Use the filter method to iterate over all items in the data array
        // For each item, return true if the item should be included and false if the
        // item should NOT be included
//        filteredData = searchText.isEmpty ? data : data.filter { (item: String) -> Bool in
            // If dataItem matches the searchText, return true to include it
//            return item.range(of: searchText, options: .caseInsensitive, range: nil, locale: nil) != nil
//        }
        
        tableView.reloadData()
    }
}
