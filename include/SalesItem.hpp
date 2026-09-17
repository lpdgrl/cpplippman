#ifndef SALES_ITEM_H
#define SALES_ITEM_H 1

  #include <iostream>

  class SalesItem
  {
    public:
      SalesItem() = default;

      const char* Isbn()
      {
        return m_isbn;
      }

      friend std::istream& operator>>(std::istream& in, SalesItem& rhs); 
      friend std::ostream& operator<<(std::ostream& out, const SalesItem& rhs);

      SalesItem& operator=(const SalesItem& rhs)
      {
        if (&rhs == this)
        {
          return *this;
        }

        CopyingIsbn(rhs.m_isbn);
        m_number = rhs.m_number;
        m_sum = rhs.m_sum;
        m_mid_worth = rhs.m_mid_worth;
        m_price = rhs.m_price;

        return *this;
      }

      SalesItem operator+(const SalesItem& rhs)
      {
        SalesItem item;
        if (*this == rhs)
        {
          item.CopyingIsbn(rhs.m_isbn);
          item.m_number = m_number + rhs.m_number;
          item.m_sum = m_sum + rhs.m_sum;
          item.m_mid_worth = item.m_sum / item.m_number;
          return item;
        }
        return item;
      }

      SalesItem& operator+=(const SalesItem& rhs)
      {
        if (*this == rhs)
        {
          m_number += rhs.m_number;
          m_sum += rhs.m_sum;
          m_mid_worth = m_sum / m_number;
        }
        return *this;
      }

      bool operator==(const SalesItem& rhs) const noexcept
      {
        if (&rhs == this)
        {
          return true;
        }

        for (size_t i = 0; i < 16; ++i)
        {
          if (m_isbn[i] != rhs.m_isbn[i])
          {
            return false;
          }
        }

        return true;
      }
    
    protected:

    private:
      void Calculations() noexcept
      {
        m_sum = m_number * m_price;
        m_mid_worth = m_sum / m_number;
      }

      void CopyingIsbn(const char* isbn) noexcept 
      {
        for (size_t i = 0; i < 16; ++i)
        {
          m_isbn[i] = isbn[i];
        }
      }

      char m_isbn[16]{};
      int m_number{};
      int m_sum{};
      int m_mid_worth{};
      double m_price;
  };

  std::istream& operator>>(std::istream& in, SalesItem& rhs)
    {
      // std::cout << "read" << '\n';
      in >> rhs.m_isbn >> rhs.m_number >> rhs.m_price;
      rhs.Calculations();
      return in;
    }

    std::ostream& operator<<(std::ostream& out, const SalesItem& rhs)
    {
      out << rhs.m_isbn << 
             " " << rhs.m_number <<
             " " << rhs.m_sum << 
             " " << rhs.m_mid_worth << '\n';
      return out;
    }

#endif 