#version 120

uniform int vertexCount;

void main()
{
    gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
    gl_TexCoord[0] = gl_MultiTexCoord0;
    
    gl_FrontColor = gl_Color;
    //gl_PointSize = 20*float(gl_VertexID)/float(vertexCount);
    gl_PointSize = 20*gl_Normal.x;
    
    //gl_FrontColor = gl_Color;
    
}