//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 20 2018 10:52:40).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDEKit/IDEInspectorProperty.h>

@class DVTButtonTextField, IBAutolayoutPropertyEditingController, IDEInspectorKeyPath, NSStepper;

@interface IBAutolayoutPropertyInspectorProperty : IDEInspectorProperty
{
    DVTButtonTextField *_textField;
    IBAutolayoutPropertyEditingController *_editingController;
    IDEInspectorKeyPath *_propertyKeyPath;
    NSStepper *_stepper;
}

@property(retain) NSStepper *stepper; // @synthesize stepper=_stepper;
@property(readonly, nonatomic) IDEInspectorKeyPath *propertyKeyPath; // @synthesize propertyKeyPath=_propertyKeyPath;
@property(readonly, nonatomic) IBAutolayoutPropertyEditingController *editingController; // @synthesize editingController=_editingController;
@property(retain) DVTButtonTextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (id)findIndicatorContentViewWithContext:(id)arg1;
- (double)baseline;
- (void)setupRefreshTriggersAndConfigure;
- (void)refresh;
- (id)objectsKeyPath;
- (id)makeEditingController;
- (id)inspectedDocument;
- (id)inspectorController;
- (id)nibBundle;
- (id)nibName;

@end

