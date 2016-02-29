//
//  PragBook.h
//  CDBookshelf
//
//  Created by Edward Liu on 16/2/28.
//  Copyright © 2016年 Edward Liu. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Author, Chapter;

NS_ASSUME_NONNULL_BEGIN

@interface PragBook : NSManagedObject

// Insert code here to declare functionality of your managed object subclass

@end

NS_ASSUME_NONNULL_END

#import "PragBook+CoreDataProperties.h"
