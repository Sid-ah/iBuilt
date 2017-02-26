//
//  ManualViewController.swift
//  iBuilt
//
//  Created by Pat Needham on 2/25/17.
//  Copyright © 2017 Apprentice. All rights reserved.
//

import UIKit

class ManualViewController: UIViewController {

    @IBOutlet weak var nameLabel: UILabel!
    @IBOutlet weak var descriptionLabel: UILabel!
    @IBOutlet weak var viewPDFButton: UIButton!
    
    var theManual = [String: AnyObject]()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        nameLabel.text = theManual["name"] as? String
        descriptionLabel.text = theManual["description"] as? String
        viewPDFButton.setTitle("View Instructions", for: .normal)
        
        // Display an image for a given manual
        
//        let setUrl = URL(string: theManual["image"] as! String)
//        let imageUrl = NSData(contentsOf: setUrl!)
//        let Renderimage: UIImageView = UIImageView(frame:CGRectMake(CGFloat((160), CGFloat(130), 60, 60))
//        RenderImage.image = UIImage(data: imageUrl)
//        self.view.addSubview(RenderImage)
    }
    
    @IBAction func viewPDFClicked(_ sender: Any) {
        let url = URL(string: theManual["pdf_url"] as! String)
        UIApplication.shared.open(url!, options: [:], completionHandler: nil)
    }
}
