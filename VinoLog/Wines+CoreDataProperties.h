//
//  Wines+CoreDataProperties.h
//  VinoLog
//
//  Created by Mike Henry on 10/19/15.
//  Copyright © 2015 Mike Henry. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "Wines.h"

NS_ASSUME_NONNULL_BEGIN

@interface Wines (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *wineName;
@property (nullable, nonatomic, retain) NSString *wineVintage;
@property (nullable, nonatomic, retain) NSString *wineVariety;
@property (nullable, nonatomic, retain) NSString *wineCompany;
@property (nullable, nonatomic, retain) NSString *wineRating;
@property (nullable, nonatomic, retain) NSDecimalNumber *winePurPrice;
@property (nullable, nonatomic, retain) NSDate *winePurDate;
@property (nullable, nonatomic, retain) NSDate *wineConsDate;
@property (nullable, nonatomic, retain) NSString *wineCategory;
@property (nullable, nonatomic, retain) NSString *wineImage;

@end

NS_ASSUME_NONNULL_END
