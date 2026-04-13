 
        #shader vertex
        #version 330 core
        
        layout(location = 0)in vec4 position;
                                              //GLSL
        void main()
        {
          gl_Position = position;
        };

        #shader fragment

        #version 330 core
        
        layout(location = 0)out vec4 color;
                                              //GLSL
        void main()
        {
        color = vec4(0.7, 0.4, 0.3, 0.0);
        };