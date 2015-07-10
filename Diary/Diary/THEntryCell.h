//
//  THEntryCell.h
//  Diary
//
//  Created by 李正宁 on 7/10/15.
//  Copyright (c) 2015 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>


@class THDiaryEntry;

@interface THEntryCell : UITableViewCell

+ (CGFloat)heightForEntry:(THDiaryEntry *)entry;

- (void)configureCellForEntry: (THDiaryEntry *)entry;

@end
