//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSCopying-Protocol.h>
#import <FileProvider/NSSecureCoding-Protocol.h>

@class FPItemCollection, NSArray, NSError, NSFileProviderDomain, NSFileProviderManager, NSProgress, NSString, NSURL;

@interface FPProviderDomain : NSObject <NSSecureCoding, NSCopying>
{
    FPItemCollection *_itemCollection;
    BOOL _keepLocalStorageUpToDate;
    BOOL _readOnly;
    BOOL _supportsEnumeration;
    BOOL _isAvailableSystemWide;
    BOOL _enabled;
    BOOL _isConnectedToAppExtension;
    BOOL _canDisable;
    BOOL _hidden;
    BOOL _usesUniqueItemIdentifiersAcrossDevices;
    BOOL _supportsPickingFolders;
    BOOL _needsAuthentication;
    BOOL _ejectable;
    BOOL _shouldHideExtensionName;
    BOOL _shouldHideDomainDisplayName;
    NSString *_identifier;
    NSString *_providerID;
    NSArray *_supportedFileTypes;
    NSString *_topLevelBundleIdentifier;
    NSURL *_extensionBundleURL;
    NSArray *_storageURLs;
    NSArray *_supportedSearchFilters;
    NSProgress *_progress;
    NSFileProviderManager *_manager;
    NSString *_providerDisplayName;
    NSFileProviderDomain *_domain;
    NSString *_purposeIdentifier;
    NSString *_version;
}

+ (void)fetchProviderDomainForItem:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)providerDomainForItem:(id)arg1 error:(id *)arg2;
+ (id)providerDomainsWithError:(id *)arg1;
+ (id)providerDomainWithID:(id)arg1 error:(id *)arg2;
+ (void)fetchProviderDomainWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)providerDomainForURL:(id)arg1 error:(id *)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)endMonitoringProviderDomainChanges:(id)arg1;
+ (id)beginMonitoringProviderDomainChangesWithHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL shouldHideDomainDisplayName; // @synthesize shouldHideDomainDisplayName=_shouldHideDomainDisplayName;
@property(nonatomic) BOOL shouldHideExtensionName; // @synthesize shouldHideExtensionName=_shouldHideExtensionName;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *purposeIdentifier; // @synthesize purposeIdentifier=_purposeIdentifier;
@property(nonatomic, getter=isEjectable) BOOL ejectable; // @synthesize ejectable=_ejectable;
@property(retain, nonatomic) NSFileProviderDomain *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) NSString *providerDisplayName; // @synthesize providerDisplayName=_providerDisplayName;
@property(readonly, nonatomic) NSFileProviderManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) BOOL needsAuthentication; // @synthesize needsAuthentication=_needsAuthentication;
@property(nonatomic) BOOL supportsPickingFolders; // @synthesize supportsPickingFolders=_supportsPickingFolders;
@property(nonatomic) BOOL usesUniqueItemIdentifiersAcrossDevices; // @synthesize usesUniqueItemIdentifiersAcrossDevices=_usesUniqueItemIdentifiersAcrossDevices;
@property(retain, nonatomic) NSArray *supportedSearchFilters; // @synthesize supportedSearchFilters=_supportedSearchFilters;
@property(nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property(nonatomic) BOOL canDisable; // @synthesize canDisable=_canDisable;
@property(nonatomic) BOOL isConnectedToAppExtension; // @synthesize isConnectedToAppExtension=_isConnectedToAppExtension;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic) BOOL isAvailableSystemWide; // @synthesize isAvailableSystemWide=_isAvailableSystemWide;
@property(retain, nonatomic) NSArray *storageURLs; // @synthesize storageURLs=_storageURLs;
@property(retain, nonatomic) NSURL *extensionBundleURL; // @synthesize extensionBundleURL=_extensionBundleURL;
@property(retain, nonatomic) NSString *topLevelBundleIdentifier; // @synthesize topLevelBundleIdentifier=_topLevelBundleIdentifier;
@property(nonatomic) BOOL supportsEnumeration; // @synthesize supportsEnumeration=_supportsEnumeration;
@property(retain, nonatomic) NSArray *supportedFileTypes; // @synthesize supportedFileTypes=_supportedFileTypes;
@property(nonatomic, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;
@property(readonly, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic, getter=isEmpty) BOOL empty;
@property(readonly, nonatomic) BOOL isMainiCloudDriveDomain;
@property(readonly, nonatomic) BOOL isiCloudDriveProvider;
- (void)setEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *iCloudAccountIdentifier;
@property(readonly, nonatomic) BOOL containsPhotos;
@property(readonly, nonatomic) BOOL canDisconnect;
@property(readonly, nonatomic) NSString *containingBundleIdentifier;
@property(readonly, nonatomic) NSString *extensionBundleIdentifier;
@property(readonly, nonatomic) NSString *domainFullDisplayName;
@property(readonly, nonatomic) NSString *domainDisplayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithProviderID:(id)arg1 domain:(id)arg2;
- (id)init;
- (id)storageURL;
- (id)bundleURL;
- (id)providerIdentifier;
- (id)localizedName;
- (id)localizedTitleForSortDescriptor:(id)arg1;

@end

