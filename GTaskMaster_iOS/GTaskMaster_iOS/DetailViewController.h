//
//  DetailViewController.h
//  GTaskMaster_iOS
//
//  Created by Kurt Hardin on 6/21/12.
//  Copyright (c) 2012 Kurt Hardin. All rights reserved.
//

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate,UITableViewDataSource,UITableViewDelegate,NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UITableView *detailDescriptionTableView;

@end
