//
//  DetailViewController.h
//  W4D1-CoreData-Prep
//
//  Created by Daniel Mathews on 2017-06-21.
//  Copyright © 2017 Daniel Mathews. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "W4D1_CoreData_Prep+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Book *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

