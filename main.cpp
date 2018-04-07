#include <SFML/Graphics.hpp>

int main()
{
    // Создаем главное окно приложения
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pong");

    // Главный цикл приложения
    while(window.isOpen())
    {
        // Обрабатываем события в цикле
        sf::Event event;
        while(window.pollEvent(event))
        {
            // Кроме обычного способа наше окно будет закрываться по нажатию на Escape
            if(event.type == sf::Event::Closed || 
              (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                window.close();
        }
	
	sf::Clock clock;
	float time;
	// Включаем вертикальную синхронизацию (для плавной анимации)
	window.setVerticalSyncEnabled(true);

        // Очистка
        window.clear();
        time = clock.getElapsedTime().asMilliseconds();
	clock.restart();
        window.display();
    }

    return 0;
}
