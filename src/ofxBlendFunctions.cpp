//
//  ofxBlendFunctions.cpp
//
//  Created by Golan Levin
//  Edited by Ben Snell
//

#include "ofxBlendFunctions.hpp"

void ofxBlendFunctions::hunt(int period, int defaultSid, int defaultDid) {
    // sets all possible combinations of blend functions,
    // changing modes every [period] milliseconds.
    
    // All checked out, works well.

    
    glEnable(GL_BLEND);
    
    if ((defaultSid == -1) && (defaultDid == -1)) {
        
        int sid =  (ofGetElapsedTimeMillis()/(8*period))%9;
        int did =  (ofGetElapsedTimeMillis()/period)%8;
        glBlendFunc(sfact[sid], dfact[did]);
        // ofLog(OF_LOG_NOTICE, "SRC %d    DST %d\n", sid, did);
        printf("SRC %d    DST %d\n", sid, did);
        
    } else if (defaultDid == -1){
        
        int did =  (ofGetElapsedTimeMillis()/period)%8;
        glBlendFunc(sfact[defaultSid], dfact[did]);
        // ofLog(OF_LOG_NOTICE, "SRC %d    DST %d\n", defaultSid, did);
        printf("SRC %d    DST %d\n", defaultSid, did);
        
    } else if (defaultSid == -1){
        
        int sid =  (ofGetElapsedTimeMillis()/(8*period))%9;
        glBlendFunc(sfact[sid], dfact[defaultDid]);
        // ofLog(OF_LOG_NOTICE, "SRC %d    DST %d\n", sid, defaultDid);
        printf("SRC %d    DST %d\n", sid, defaultDid);
        
    } else {
        
        glBlendFunc(sfact[defaultSid], dfact[defaultDid]);
        
    }
    
}
