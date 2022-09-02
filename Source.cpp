#include <cmath>
#include <SFML/Graphics.hpp>

using namespace sf;

const int WINDOW_WIDTH = 720;
const int WINDOW_HEIGHT = 640;

const int RECURSION_LEVEL = 3;
const int CIRCLE_QUANTITY = 6;

const double BASE_RADIUS = 128;
const double BASE_CIRCLE_THICKNESS = 4;
const double RADIUS_DECREMENT = 0.5;
const double PI = acos(-1);

const Color BACKGROUND_COLOR = Color::Black;
const Vector3f BASE_CIRCLE_COLOR = { 255, 0, 150 };


inline float max(float a, float b) {
	return (a > b ? a : b);
}

inline Color color_from_vector(Vector3f colorVector) {
	return Color((int)colorVector.x, (int)colorVector.y, (int)colorVector.z);
}

void draw_circle_fractal(Vector2f baseCoords, float baseRadius, int level, RenderWindow& window) {
	CircleShape baseCircle = CircleShape(baseRadius);
	float coefficient = (float)level / RECURSION_LEVEL;

	baseCircle.setOrigin(baseRadius, baseRadius);
	baseCircle.setPosition(baseCoords);
	baseCircle.setFillColor(Color::Transparent);
	baseCircle.setOutlineColor(color_from_vector(BASE_CIRCLE_COLOR * max(0.2, coefficient)));
	baseCircle.setOutlineThickness(max(1, BASE_CIRCLE_THICKNESS * coefficient));

	window.draw(baseCircle);

	if (level != 0) {
		double newRadius = baseRadius * RADIUS_DECREMENT;

		for (int q = 0; q < CIRCLE_QUANTITY; q++)
			draw_circle_fractal(
				baseCoords + baseRadius * Vector2f(cos(2 * PI / CIRCLE_QUANTITY * q), sin(2 * PI / CIRCLE_QUANTITY * q)),
				newRadius, level - 1, window
			);
	}
}


int main() {
	setlocale(LC_ALL, "");
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Recursion Graphics");

	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			switch (event.type) {
			case Event::Closed:
				window.close();
				break;
			}
		}
		window.clear(BACKGROUND_COLOR);

		draw_circle_fractal(Vector2f(WINDOW_HEIGHT / 2, WINDOW_WIDTH / 2), BASE_RADIUS, RECURSION_LEVEL, window);

		window.display();
	}

	return 0;
}
