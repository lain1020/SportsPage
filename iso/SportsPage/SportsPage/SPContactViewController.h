//
//  SPContactViewController.h
//  SportsPage
//
//  Created by absolute on 2016/10/18.
//  Copyright © 2016年 Absolute. All rights reserved.
//

#import "SPBaseViewController.h"

@interface SPContactViewController : SPBaseViewController

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (strong,nonatomic,readonly) UISearchController * searchController;

- (void)prepareForFriendsData;

@end
