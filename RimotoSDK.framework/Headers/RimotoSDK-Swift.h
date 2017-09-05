// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import ObjectiveC;
@import Foundation;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class NSCoder;

SWIFT_CLASS("_TtC9RimotoSDK11AccessToken")
@interface AccessToken : NSObject <NSCoding>
@property (nonatomic, readonly, copy) NSString * _Nonnull Token;
@property (nonatomic, readonly, copy) NSDate * _Nonnull Expiration;
@property (nonatomic, readonly) NSTimeInterval TTL;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)coder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface AccessToken (SWIFT_EXTENSION(RimotoSDK))
@end


@interface NSHTTPURLResponse (SWIFT_EXTENSION(RimotoSDK))
- (id _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
@end


@interface NSMutableURLRequest (SWIFT_EXTENSION(RimotoSDK))
@end


@interface NSMutableURLRequest (SWIFT_EXTENSION(RimotoSDK))
@end


@interface NSURL (SWIFT_EXTENSION(RimotoSDK))
@end


@interface NSURLComponents (SWIFT_EXTENSION(RimotoSDK))
@end


@interface NSURLRequest (SWIFT_EXTENSION(RimotoSDK))
@end


@interface NSURLRequest (SWIFT_EXTENSION(RimotoSDK))
- (NSString * _Nullable)objectForKeyedSubscript:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
@end


SWIFT_CLASS("_TtC9RimotoSDK8Operator")
@interface Operator : NSObject
@property (nonatomic, readonly, copy) NSString * _Nonnull name;
@property (nonatomic, readonly, copy) NSURL * _Nullable logo;
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface Operator (SWIFT_EXTENSION(RimotoSDK))
+ (NSArray<Operator *> * _Nonnull)loadDefaultInfo SWIFT_WARN_UNUSED_RESULT;
+ (NSArray<Operator *> * _Nullable)loadWithContentsOfURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
@end


/// This is the Rimoto API object.
/// Sample:
/// \code
/// let rimotoInstance = Rimoto.register("....") // your API code
/// rimotoInstance.delegate = self
/// rimotoInstance.debug    = true
/// rimotoInstance.startRimoto()
/// NSURLProtocol.registerClass(RimotoInterceptor)
///
/// \endcode
SWIFT_CLASS("_TtC9RimotoSDK6Rimoto")
@interface Rimoto : NSObject
@property (nonatomic, copy) NSString * _Nonnull user;
@property (nonatomic) BOOL debug;
- (void)onAccessTokenWithCb:(void (^ _Nonnull)(AccessToken * _Nullable))cb;
@property (nonatomic) BOOL byPass;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (Rimoto * _Nonnull)register:(NSString * _Nonnull)apiKey SWIFT_WARN_UNUSED_RESULT;
+ (Rimoto * _Nonnull)sharedInstance SWIFT_WARN_UNUSED_RESULT;
- (void)startRimoto;
- (void)stopRimoto;
- (BOOL)running SWIFT_WARN_UNUSED_RESULT;
- (BOOL)connectedViaWifi SWIFT_WARN_UNUSED_RESULT;
- (void)ignoreRequest:(NSMutableURLRequest * _Nonnull)request ignore:(BOOL)ignore;
- (void)ignoreRequest:(NSMutableURLRequest * _Nonnull)request;
@property (nonatomic, readonly) NSInteger proxyPort;
@property (nonatomic) BOOL blockAllAVMedia;
- (Operator * _Nullable)getOperator SWIFT_WARN_UNUSED_RESULT;
- (void)onOperatorChange:(void (^ _Nonnull)(Operator * _Nullable))cb;
@end

@class NSURLSession;
@class NSURLSessionDataTask;
@class NSURLResponse;
@class NSURLSessionTask;
@class NSCachedURLResponse;
@protocol NSURLProtocolClient;

SWIFT_CLASS("_TtC9RimotoSDK17RimotoInterceptor")
@interface RimotoInterceptor : NSURLProtocol <NSURLSessionDataDelegate, NSURLSessionTaskDelegate>
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, copy) NSString * _Nonnull ignoreInterceptionKey;)
+ (NSString * _Nonnull)ignoreInterceptionKey SWIFT_WARN_UNUSED_RESULT;
+ (void)startWithRimoto:(Rimoto * _Nonnull)rimoto;
+ (void)stop;
+ (BOOL)canInitWithRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
+ (NSURLRequest * _Nonnull)canonicalRequestForRequest:(NSURLRequest * _Nonnull)request SWIFT_WARN_UNUSED_RESULT;
- (void)startLoading;
- (void)stopLoading;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveResponse:(NSURLResponse * _Nonnull)response completionHandler:(void (^ _Nonnull)(NSURLSessionResponseDisposition))completionHandler;
- (void)URLSession:(NSURLSession * _Nonnull)session dataTask:(NSURLSessionDataTask * _Nonnull)dataTask didReceiveData:(NSData * _Nonnull)data;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task willPerformHTTPRedirection:(NSHTTPURLResponse * _Nonnull)response newRequest:(NSURLRequest * _Nonnull)request completionHandler:(void (^ _Nonnull)(NSURLRequest * _Nullable))completionHandler;
- (nonnull instancetype)initWithRequest:(NSURLRequest * _Nonnull)request cachedResponse:(NSCachedURLResponse * _Nullable)cachedResponse client:(id <NSURLProtocolClient> _Nullable)client OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;
@class UIWebView;

SWIFT_CLASS("_TtC9RimotoSDK20WidgetViewController")
@interface WidgetViewController : UIViewController <UIWebViewDelegate>
- (void)launch;
- (void)onDone:(id _Nonnull)sender;
- (void)onBack:(id _Nonnull)sender;
- (void)onForward:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibName bundle:(NSBundle * _Nullable)bundle OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)loadView;
- (void)viewDidLoad;
- (BOOL)webView:(UIWebView * _Nonnull)wv shouldStartLoadWithRequest:(NSURLRequest * _Nonnull)req navigationType:(UIWebViewNavigationType)navigationType SWIFT_WARN_UNUSED_RESULT;
- (void)webViewDidStartLoad:(UIWebView * _Nonnull)wv;
- (void)webView:(UIWebView * _Nonnull)wv didFailLoadWithError:(NSError * _Nonnull)error;
- (void)webViewDidFinishLoad:(UIWebView * _Nonnull)wv;
@end

#pragma clang diagnostic pop
