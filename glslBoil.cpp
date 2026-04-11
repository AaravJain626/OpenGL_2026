 std::string vertexShader =
     "#version 330 core\n"
     "\n"
     "layout(location = 0)in vec4 position;"
     "\n"                                      //GLSL
     "void main()\n"
     "{\n"
     "  gl_Position = position;\n"
     "}\n";

 std::string fragmentShader =
     "#version 330 core\n"
     "\n"
     "layout(location = 0)out vec4 color;"
     "\n"                                      //GLSL
     "void main()\n"
     "{\n"
     "color = vec4(1.0, 0.0, 0.0, 1.0);\n"
     "}\n";
