//
//  WeightReader.h
//  MNIST-BNNS
//
//  Created by Aaron Hillegass on 9/18/16.
//  Copyright © 2016 Big Nerd Ranch. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PyDumpParser.h"

@interface WeightReader : NSObject <PyDumpParserDelegate>

@property float *arrayToFill;
@property int outerLen;
@property int innerLen;


// Read a 2-dimensional array into weightVector
// The outer array should have 'outerLen' arrays
// The inner arrays should each contain 'innerLen' floats
// weightVector must be big enough to hold outerLen * innerLen floats
+ (BOOL)fillArray:(float *)weightVector
     fromFilename:(NSString *)weightsPath
      outerLength:(int)outerLen
      innerLength:(int)innerLen
            error:(NSError **)err;

// Read a 1-dimensional array into weightVector
// The array should contain len' floats
// weightVector must be big enough to hold outerLen * innerLen floats
+ (BOOL)fillArray:(float *)weightVector
     fromFilename:(NSString *)weightsPath
           length:(int)len
            error:(NSError **)err;



@end