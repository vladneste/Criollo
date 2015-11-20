//
//  CRTypes.h
//  Criollo
//
//  Created by Cătălin Stan on 11/20/15.
//  Copyright © 2015 Cătălin Stan. All rights reserved.
//

#ifndef CRTypes_h
#define CRTypes_h

@class CRRequest, CRResponse;

typedef void(^CRRouteCompletionBlock)(void);
typedef void(^CRRouteBlock)(CRRequest* _Nonnull request, CRResponse* _Nonnull response, CRRouteCompletionBlock _Nonnull completionHandler);

#endif /* CRTypes_h */