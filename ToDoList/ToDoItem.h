//
//  ToDoItem.h
//  ToDoList
//
//  Created by helenwang on 1/23/15.
//  Copyright (c) 2015 helenwang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
