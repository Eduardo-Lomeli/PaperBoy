#ifndef PERIODICO_HPP
#define PERIODICO_HPP

#include <SFML/Graphics.hpp>

class Periodico
{
public:
    Periodico();

    void Respawn(float posX, float posY);
    void Update(float velocidadPeriodico);
    void Draw(sf::RenderTarget &target) const;
    sf::FloatRect getBounds() const;
    bool isOutOfBounds(float altoVentana) const;

private:
    sf::Texture _textura;
    sf::Sprite _sprite;
    const int anchoVentana = 800;
    const int altoVentana = 600;
};

#endif // PERIODICO_HPP
