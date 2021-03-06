#pragma once

#include "Pattern.hpp"

#include <algorithm>
#include <tuple>

class PatternGosperGliderGun : public Pattern
{
  public:
    PatternGosperGliderGun();

    const std::uint8_t BLOCK_SIZE_X = 36;
    const std::uint8_t BLOCK_SIZE_Y = 9;

    virtual std::uint8_t getSizeX() const override { return m_sizeX; }
    virtual std::uint8_t getSizeY() const override { return m_sizeY; }
    virtual bool getCell(std::uint8_t x, std::uint8_t y) const override;

  private:
    std::vector<std::vector<bool>> m_patternBoard;
    std::uint8_t m_sizeX;
    std::uint8_t m_sizeY;

    virtual void initCells();
};