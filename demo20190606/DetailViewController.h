//
//  DetailViewController.h
//  demo20190606
//
//  Created by WebMatrixMan on 2019/06/05.
//  Copyright © 2019 WebMatrixMan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

