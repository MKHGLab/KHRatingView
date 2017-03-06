# KHRatingView

[![CI Status](http://img.shields.io/travis/mkhglab@gmail.com/KHRatingView.svg?style=flat)](https://travis-ci.org/mkhglab@gmail.com/KHRatingView)
[![Version](https://img.shields.io/cocoapods/v/KHRatingView.svg?style=flat)](http://cocoapods.org/pods/KHRatingView)
[![License](https://img.shields.io/cocoapods/l/KHRatingView.svg?style=flat)](http://cocoapods.org/pods/KHRatingView)
[![Platform](https://img.shields.io/cocoapods/p/KHRatingView.svg?style=flat)](http://cocoapods.org/pods/KHRatingView)

## Example

To run the example project, clone the repo, and run `pod install` from the Example directory first.

## Requirements

Suitable for `Xcode 8.2.1 (swift 3.0.2`)


## Installation

KHRatingView is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod "KHRatingView"
```

##Usage (Sample Program)
```Swift
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
```

## Author

MKHG Lab, mkhglab@gmail.com

## License

KHRatingView is available under the MIT license. See the LICENSE file for more info.
