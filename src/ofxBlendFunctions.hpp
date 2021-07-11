//
//  ofxBlendFunctions.hpp
//
//  Created by Golan Levin
//  Edited by Ben Snell
//

#ifndef ofxBlendFunctions_hpp
#define ofxBlendFunctions_hpp

#include "ofMain.h"

class ofxBlendFunctions {
    
public:
    
    void hunt(int period, int defaultSid, int defaultDid);
    
private:
    
    int sfact[9] = {
        GL_ZERO,
        GL_ONE,
        GL_DST_COLOR,
        GL_ONE_MINUS_DST_COLOR,
        GL_SRC_ALPHA,
        GL_ONE_MINUS_SRC_ALPHA,
        GL_DST_ALPHA,
        GL_ONE_MINUS_DST_ALPHA,
        GL_SRC_ALPHA_SATURATE
    };
    
    int dfact[8] = {
        GL_ZERO,
        GL_ONE,
        GL_SRC_COLOR,
        GL_ONE_MINUS_SRC_COLOR,
        GL_SRC_ALPHA,
        GL_ONE_MINUS_SRC_ALPHA,
        GL_DST_ALPHA,
        GL_ONE_MINUS_DST_ALPHA
    };
    
};

#endif /* ofxBlendFunctions_hpp */
