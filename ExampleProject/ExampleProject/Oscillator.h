//
//  Oscillator.h
//  ExampleProject
//
//  Created by Aurelius Prochazka on 5/30/12.
//  Copyright (c) 2012 Hear For Yourself. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CSDManager.h"
#import "CSDInstrument.h"
#import "CSDFunctionStatement.h"

@interface Oscillator : CSDInstrument {
    CSDFunctionStatement * functionStatement;
}

@property (nonatomic, strong) CSDFunctionStatement * functionStatement;
@property (nonatomic, strong) CSDOrchestra * orchestra;

-(id) initWithOrchestra:(CSDOrchestra *)newOrchestra;
-(NSString *) textForOrchestra;
-(void) playNoteForDuration:(float)dur withFrequency:(float)freq;

@end