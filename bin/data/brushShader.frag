#version 120

uniform sampler2DRect inputTexture;

void main(void)//Drag mouse over rendering area
{
    
    //normalized coords with some cheat
    //vec2 p = gl_TexCoord[0].xy / iResolution.x;
    
    //gl_FragColor = texture2DRect(inputTexture, gl_TexCoord[0].xy);
    //gl_FragColor = gl_FragColor;
    gl_FragColor = gl_Color;
    //gl_FragColor = vec4(uv.x,uv.y,0.0,1.0);
    
}