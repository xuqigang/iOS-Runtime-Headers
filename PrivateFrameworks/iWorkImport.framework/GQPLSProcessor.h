/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQPLSProcessor : GQPProcessor  {
    Class mGenerator;
}


- (Class)generator;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString { }*)arg4 previewRequest:(struct __QLPreviewRequest { }*)arg5 generator:(Class)arg6;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 outputType:(int)arg3 outputPath:(struct __CFString { }*)arg4 previewRequest:(struct __QLPreviewRequest { }*)arg5 generator:(Class)arg6;
- (void)pushInitialState;
- (BOOL)go;

@end