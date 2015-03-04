//
// Copyright 2009-2011 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

// UI
#import "Three20UI/TTView.h"

@interface TTLabel : TTView {
  NSString* _text;
  UIFont*   _font;
  UITextAlignment   _textAlignment;
  UIColor*          _textColor;
   
  NSString * _threePatches;
  UIImage* _topImage;
  UIImage* _middleImage;
  UIImage* _bottomImage;

}

@property (nonatomic, copy)   NSString* text;
@property (nonatomic, retain) UIFont*   font;
/**
 * The color of the text.
 */
@property (nonatomic, retain) UIColor* textColor;

/**
 * The alignment of the text.
 */
@property (nonatomic) UITextAlignment textAlignment;

@property (nonatomic, assign) BOOL ninePatch;
@property (nonatomic, retain) NSString *threePatches;
- (id)initWithText:(NSString*)text;

@end
