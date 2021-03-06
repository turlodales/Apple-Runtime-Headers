//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKPaymentAuthorizationChildViewController.h>

#import <PassKitUI/PKAutocompleteTextFieldDelegate-Protocol.h>
#import <PassKitUI/PKContactLabelMenuControllerDelegate-Protocol.h>

@class CNContact, CNPostalAddressFormattingSpecification, NSArray, NSButton, NSComboBox, NSDictionary, NSImageView, NSPopUpButton, NSSet, NSStackView, NSString, NSTextField, PKContactCountryPopUpButton, PKContactLabelMenuController, PKContactTextField;
@protocol PKPostalAddressEditorViewControllerDelegate;

@interface PKPostalAddressEditorViewController : PKPaymentAuthorizationChildViewController <PKAutocompleteTextFieldDelegate, PKContactLabelMenuControllerDelegate>
{
    CNContact *_contact;
    long long _type;
    unsigned long long _shippingType;
    NSString *_region;
    NSArray *_errors;
    id <PKPostalAddressEditorViewControllerDelegate> _delegate;
    NSSet *_requiredFields;
    NSImageView *_paymentLogoImageView;
    NSTextField *_typeTextField;
    NSTextField *_promptTextField;
    NSStackView *_controlsAndNamesStackView;
    NSStackView *_namesStackView;
    NSStackView *_phoneticNamesStackView;
    PKContactTextField *_givenNameTextField;
    PKContactTextField *_familyNameTextField;
    PKContactTextField *_phoneticGivenNameTextField;
    PKContactTextField *_phoneticFamilyNameTextField;
    NSPopUpButton *_labelPopUpButton;
    NSComboBox *_labelComboBox;
    NSStackView *_postalAddressFieldsStackView;
    NSStackView *_streetsStackView;
    PKContactTextField *_street1TextField;
    PKContactTextField *_street2TextField;
    PKContactTextField *_cityTextField;
    PKContactTextField *_districtTextField;
    PKContactTextField *_stateTextField;
    PKContactTextField *_postalCodeTextField;
    PKContactCountryPopUpButton *_countryPopUpButton;
    NSArray *_allTextFields;
    NSButton *_cancelButton;
    NSButton *_saveButton;
    PKContactLabelMenuController *_labelMenuController;
    NSDictionary *_fieldViewDictionary;
    CNPostalAddressFormattingSpecification *_formattingSpecification;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CNPostalAddressFormattingSpecification *formattingSpecification; // @synthesize formattingSpecification=_formattingSpecification;
@property(retain, nonatomic) NSDictionary *fieldViewDictionary; // @synthesize fieldViewDictionary=_fieldViewDictionary;
@property(retain, nonatomic) PKContactLabelMenuController *labelMenuController; // @synthesize labelMenuController=_labelMenuController;
@property(retain, nonatomic) NSButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) NSArray *allTextFields; // @synthesize allTextFields=_allTextFields;
@property(retain, nonatomic) PKContactCountryPopUpButton *countryPopUpButton; // @synthesize countryPopUpButton=_countryPopUpButton;
@property(retain, nonatomic) PKContactTextField *postalCodeTextField; // @synthesize postalCodeTextField=_postalCodeTextField;
@property(retain, nonatomic) PKContactTextField *stateTextField; // @synthesize stateTextField=_stateTextField;
@property(retain, nonatomic) PKContactTextField *districtTextField; // @synthesize districtTextField=_districtTextField;
@property(retain, nonatomic) PKContactTextField *cityTextField; // @synthesize cityTextField=_cityTextField;
@property(retain, nonatomic) PKContactTextField *street2TextField; // @synthesize street2TextField=_street2TextField;
@property(retain, nonatomic) PKContactTextField *street1TextField; // @synthesize street1TextField=_street1TextField;
@property(retain, nonatomic) NSStackView *streetsStackView; // @synthesize streetsStackView=_streetsStackView;
@property(retain, nonatomic) NSStackView *postalAddressFieldsStackView; // @synthesize postalAddressFieldsStackView=_postalAddressFieldsStackView;
@property(retain, nonatomic) NSComboBox *labelComboBox; // @synthesize labelComboBox=_labelComboBox;
@property(retain, nonatomic) NSPopUpButton *labelPopUpButton; // @synthesize labelPopUpButton=_labelPopUpButton;
@property(retain, nonatomic) PKContactTextField *phoneticFamilyNameTextField; // @synthesize phoneticFamilyNameTextField=_phoneticFamilyNameTextField;
@property(retain, nonatomic) PKContactTextField *phoneticGivenNameTextField; // @synthesize phoneticGivenNameTextField=_phoneticGivenNameTextField;
@property(retain, nonatomic) PKContactTextField *familyNameTextField; // @synthesize familyNameTextField=_familyNameTextField;
@property(retain, nonatomic) PKContactTextField *givenNameTextField; // @synthesize givenNameTextField=_givenNameTextField;
@property(retain, nonatomic) NSStackView *phoneticNamesStackView; // @synthesize phoneticNamesStackView=_phoneticNamesStackView;
@property(retain, nonatomic) NSStackView *namesStackView; // @synthesize namesStackView=_namesStackView;
@property(retain, nonatomic) NSStackView *controlsAndNamesStackView; // @synthesize controlsAndNamesStackView=_controlsAndNamesStackView;
@property(retain, nonatomic) NSTextField *promptTextField; // @synthesize promptTextField=_promptTextField;
@property(retain, nonatomic) NSTextField *typeTextField; // @synthesize typeTextField=_typeTextField;
@property(retain, nonatomic) NSImageView *paymentLogoImageView; // @synthesize paymentLogoImageView=_paymentLogoImageView;
@property(retain, nonatomic) NSSet *requiredFields; // @synthesize requiredFields=_requiredFields;
@property(nonatomic) __weak id <PKPostalAddressEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(nonatomic) unsigned long long shippingType; // @synthesize shippingType=_shippingType;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (id)_ISOCountryCodeForCountryName:(id)arg1;
- (id)_countryMenuItems;
- (BOOL)_wantsFieldKey:(id)arg1;
- (void)_applyPlaceholderForFieldKey:(id)arg1 toView:(id)arg2;
- (BOOL)_shouldShowPhoneticName;
- (void)_updateFields;
- (void)_updateLabels;
- (void)_applyErrors:(id)arg1;
- (void)_applyContact:(id)arg1 addressOnly:(BOOL)arg2;
- (id)_postalAddressPromptStringForType:(long long)arg1;
- (id)_postalAddressTypeStringForType:(long long)arg1;
- (id)_contactIncludingCountryInfo:(BOOL)arg1;
- (id)_controlsForError:(id)arg1;
- (id)_controlsForPostalAddressKey:(id)arg1;
- (void)saveButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)countrySelected:(id)arg1;
- (void)contactLabelMenuController:(id)arg1 didShowControl:(id)arg2;
- (void)contactLabelMenuController:(id)arg1 didHideControl:(id)arg2;
- (void)autocompleteTextField:(id)arg1 didSelectContact:(id)arg2 source:(long long)arg3;
- (id)autocompleteTextFieldWillBeginSearch:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
@property(readonly, nonatomic) CNContact *editedContact;
@property(readonly, nonatomic, getter=isValid) BOOL valid;
- (void)resetSubviewsOfView:(id)arg1;
- (void)resetErrors;
- (void)reset;
- (void)viewDidDisappear;
- (void)viewDidAppear;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

