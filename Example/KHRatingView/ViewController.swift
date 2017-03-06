//
//  ViewController.swift
//  KHRatingView
//
//  Created by mkhglab@gmail.com on 03/06/2017.
//  Copyright (c) 2017 mkhglab@gmail.com. All rights reserved.
//

import UIKit
import KHRatingView

class ViewController: UIViewController {

    @IBOutlet weak var smoothRatingView: KHRatingView!
    @IBOutlet weak var singleSelectionRatingView: KHRatingView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        // Do any additional setup after loading the view, typically from a nib.
        smoothRatingView.delegate = self
        singleSelectionRatingView.delegate = self
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}

extension ViewController:KHRatingViewDelegate{
    func ratingChanged(_ viewTag: Int32, ratingValue rating: Float) {
        
        print("viewTag: \(viewTag), ratingValue:\(rating)")
    }
}

