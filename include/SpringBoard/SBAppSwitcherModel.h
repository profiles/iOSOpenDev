/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"

@class NSMutableArray;

@interface SBAppSwitcherModel : SBUnknownSuperclass {
	NSMutableArray *_recentDisplayIdentifiers;	// 4 = 0x4
}
+ (id)sharedInstance;	// 0x116ef9
- (id)init;	// 0x116e95
- (void)dealloc;	// 0x1173d1
- (void)_saveRecents;	// 0x117379
- (id)_recentsFromPrefs;	// 0x1171bd
- (void)addToFront:(id)front;	// 0x1170e5
- (void)remove:(id)remove;	// 0x11708d
- (id)appAtIndex:(unsigned)index;	// 0x117031
- (id)identifierAtIndex:(unsigned)index;	// 0x11700d
- (unsigned)count;	// 0x116fed
- (id)identifiers;	// 0x116e85
- (void)appsRemoved:(id)removed added:(id)added;	// 0x116f71
- (id)snapshot;	// 0x116f41
@end