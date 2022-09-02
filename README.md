# sfml-circle-recursion
C++ &amp; SFML program which generates fractal that consists of circles

You can change resulting picture by modifying constants in `Source.cpp` file
```
const int WINDOW_WIDTH = 720;
const int WINDOW_HEIGHT = 640;

const int RECURSION_LEVEL = 3;
const int CIRCLE_QUANTITY = 6;

const double BASE_RADIUS = 128;
const double BASE_CIRCLE_THICKNESS = 4;
const double RADIUS_DECREMENT = 0.5;

const Color BACKGROUND_COLOR = Color::Black;
const Vector3f BASE_CIRCLE_COLOR = { 255, 0, 150 };
```

## Results

<div align=center>
<img src="https://user-images.githubusercontent.com/99137907/188206879-0bbc7b73-15b5-403d-a853-d1590f32dfb1.png" width = 40%/>
<img src="https://user-images.githubusercontent.com/99137907/188206905-86956f6d-ba70-43ab-afce-fcdf4ea2d035.png" width = 40%/>
<img src="https://user-images.githubusercontent.com/99137907/188207191-a2e65994-fb51-4764-a8f4-6d91b06a344c.png" width = 40%/>
<img src="https://user-images.githubusercontent.com/99137907/188206919-469dd901-a62a-468e-bc67-28c281654c01.png" width = 40%/>
<img src="https://user-images.githubusercontent.com/99137907/188206924-8ebd149f-de2a-4270-a5ce-d22f3d954145.png" width = 40%/>
<img src="https://user-images.githubusercontent.com/99137907/188206938-321ccb10-3157-413a-9bc5-fd20cab77106.png" width = 40%/>
<img src="https://user-images.githubusercontent.com/99137907/188206947-85b715e3-8a25-4f24-9c74-c4e3759c87cf.png" width = 40%/>
</div>
