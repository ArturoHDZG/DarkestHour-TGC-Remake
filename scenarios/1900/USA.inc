##############################
# Country definition for USA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = USA
  ai                 = "Majors/USA/USA_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1809 # Washington
  manpower           = 75
  research_mod           = 0.65
  peacetime_ic_mod       = 0.2
  wartime_ic_mod         = 0.5
  industrial_modifier    = 0.5
  # Resource Reserves
  energy         = 30780
  metal          = 15390
  rare_materials = 7695
  oil            = 500
  supplies       = 500
  money          = 100
  transports     = 260
  escorts        = 53

  diplomacy = {
    relation = {
      tag        = ARG
      value      = 75
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = AST value = 125 }
    relation = { tag = BEL value = 75 }
    relation = { tag = BHU value = 100 }
    relation = {
      tag        = BOL
      value      = 85
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = BRA
      value      = 120
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = CAN
      value      = 175
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = CHL
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = COL
      value      = 75
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = COS
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = CUB
      value      = 200
      access     = yes
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = DEN value = 75 }
    relation = {
      tag        = DOM
      value      = 125
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = ECU
      value      = 75
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = ENG value = 100 }
    relation = { tag = FRA value = 65 }
    relation = { tag = U08 value = 75 }
    relation = {
      tag        = GUA
      value      = 125
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = HAI
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = HOL value = 70 }
    relation = {
      tag        = HON
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 120 }
    relation = { tag = JAP value = 15 }
    relation = { tag = LIB value = 200 access = yes }
    relation = { tag = MAN value = 1 }
    relation = {
      tag        = MEX
      value      = 125
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = NEP value = 100 }
    relation = {
      tag        = NIC
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = 125 }
    relation = { tag = OMN value = 100 }
    relation = {
      tag        = PAN
      value      = 175
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = PAR
      value      = 75
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = PHI value = 200 access = yes }
    relation = {
      tag        = PRU
      value      = 75
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = SAF value = 125 }
    relation = {
      tag        = SAL
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = SOV value = 35 }
    relation = { tag = SCH value = 1 }
    relation = { tag = SWE value = 75 }
    relation = {
      tag        = URU
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = {
      tag        = VEN
      value      = 125
      guaranteed = { year = 1914 month = june day = 1 }
    }
    relation = { tag = YEM value = 100 }
  }
  SpyInfo                = { country = "USA" NumberOfSpies = 9 }

  nationalprovinces      = { 1809 1953 1949 1948 1952 1951 1950 1947 1956 1954 1955 1960 1958 1963 1961 1962 1964 1813 1812 1814 1818 1815 1816 1817 1808 1807 1801 1797 1791 1795 1793 1792 1805 1803 1804 1790 1787 1788 1784 1785 1789 1796 1826 1806 2174 1810 1811 1820 1819 1942 1943 1940 1939 1936 1937 1944 1931 1825 1821 1842 1845 1802 1957 1828 1934 1930 1929 1932 1918 1915 1925 1836 1833 1830 1829 1832 1839 1838 1841 1843 1834 1837 2150 1846 1850 1855 1856 1858 1857 1859 1860 1914 1913 1919 1910 1911 1924 1928 1926 1920 1921 1922 1905 1906 1904 1900 1901 1902 1898 1896 1907 1908 1897 1909 1868 1866 1862 1869 1865 1871 1873 1875 1876 1874 1877 1878 1882 1879 1880 1895 1893 1892 1899 1886 1887 1883 1888 1889 1884 2141 2140 2142 2139 1923 1831 1847 1935 1945 1885 1872 1863 1864 1778 2151 2143 2144 2145 2146 2147 1890 1891 1894 1881 1870 1861 1903 1851 1916 1927 1912 1852 1853 1854 1867 1849 1917 1933 1835 1840 1848 1844 1822 1823 1827 1941 1946 1959 1800 1794 1824 1798 1799 1786 1938 }
  ownedprovinces         = { 1953 1949 1948 1952 1951 1950 1947 1956 1954 1955 1960 1958 1963 1961 1962 1964 1813 1812 1814 1818 1815 1816 1817 1809 1808 1807 1801 1797 1791 1795 1793 1792 1805 1803 1804 1790 1787 1788 1784 1785 1789 1796 1826 1806 1810 1811 1820 1819 1942 1943 1940 1939 1936 1937 1944 1931 1825 1821 1842 1845 1802 1957 1828 1934 1930 1929 1932 1918 1915 1925 1836 1833 1830 1829 1832 1839 1838 1841 1843 1834 1837 2150 1846 1850 1855 1856 1858 1857 1859 1860 1914 1913 1919 1910 1911 1924 1928 1926 1920 1921 1922 1905 1906 1904 1900 1901 1902 1898 1896 1907 1908 1897 1909 1868 1866 1862 1869 1865 1871 1873 1875 1876 1874 1877 1878 1882 1879 1880 1895 1893 1892 1899 1886 1887 1883 1888 1889 1884 2141 2140 2142 2139 1923 1765 1736 1737 1735 1739 1734 1738 1673 1683 2174 1747 1733 1751 1745 1778 1831 1872 1863 1864 1847 1935 1945 1885 1565 1569 1572 1577 1580 2151 2143 2144 2145 2146 2147 1890 1891 1894 1881 1870 1861 1903 1851 1916 1927 1912 1852 1853 1854 1867 1849 1917 1933 1835 1840 1848 1844 1822 1823 1827 1941 1946 1959 1800 1794 1824 1798 1799 1786 1938 1968 }
  controlledprovinces    = { 1953 1949 1948 1952 1951 1950 1947 1956 1954 1955 1960 1958 1963 1961 1962 1964 1813 1812 1814 1818 1815 1816 1817 1809 1808 1807 1801 1797 1791 1795 1793 1792 1805 1803 1804 1790 1787 1788 1784 1785 1789 1796 1826 1806 1810 1811 1820 1819 1942 1943 1940 1939 1936 1937 1944 1931 1825 1821 1842 1845 1802 1957 1828 1934 1930 1929 1932 1918 1915 1925 1836 1833 1830 1829 1832 1839 1838 1841 1843 1834 1837 2150 1846 1850 1855 1856 1858 1857 1859 1860 1914 1913 1919 1910 1911 1924 1928 1926 1920 1921 1922 1905 1906 1904 1900 1901 1902 1898 1896 1907 1908 1897 1909 1868 1866 1862 1869 1865 1871 1873 1875 1876 1874 1877 1878 1882 1879 1880 1895 1893 1892 1899 1886 1887 1883 1888 1889 1884 2141 2140 2142 2139 1923 1765 1736 1737 1735 1739 1734 1738 1673 1683 1747 1733 1751 1745 1778 1831 1872 1863 1864 1847 1935 1945 1885 2174 1565 1569 1572 1577 1580 2151 2143 2144 2145 2146 2147 1890 1891 1894 1881 1870 1861 1903 1851 1916 1927 1912 1852 1853 1854 1867 1849 1917 1933 1835 1840 1848 1844 1822 1823 1827 1941 1946 1959 1800 1794 1824 1798 1799 1786 1938 1968 }
  claimedprovinces       = { 1734 1735 1736 1737 1738 1747 1745 1751 1733 1683 1739 1673 889 }

  techapps               = { 1010 1020 1160 1170 3010 3110 3210 3220 3410 3420 3610 3720 3810 5310 5800 6500 6510 8010 8020 8050 8060 8070 8100 8500 13060 13070 }

  policy = {
    date              = { year = 1917 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    freedom           = 10
    free_market       = 10
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 240325 } # Woodrow Wilson
  headofgovernment       = { type = 9 id = 240309 } # William Jennings Bryan
  foreignminister        = { type = 9 id = 240285 } # William Jennings Bryan
  armamentminister       = { type = 9 id = 240345 } # W.G. McAdoo
  ministerofsecurity     = { type = 9 id = 240365 } # William J. Flynn
  ministerofintelligence = { type = 9 id = 240311 } # Ralph Van Deman
  chiefofstaff           = { type = 9 id = 240266 } # William W. Wotherspoon
  chiefofarmy            = { type = 9 id = 240247 } # William W. Wotherspoon

      landunit = {
    id       = { type = 10054 id = 1 }
    name     = "Eastern Department"
    location = 1795
    division = {
      id             = { type = 10054 id = 2 }
      name           = "1st Division"
      type           = infantry
      model          = 2
      strength       = 100
      experience     = 50
    }
  }


      landunit = {
    id       = { type = 10054 id = 3 }
    name     = "Southern Department"
    location = 1922
    division = {
      id             = { type = 10054 id = 4 }
      name           = "2nd Division"
      type           = infantry
      model          = 2
      strength       = 100
      experience     = 25
    }
    division = {
      id             = { type = 10054 id = 5 }
      name           = "15th Cavalry Division"
      type           = cavalry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 100
      experience     = 15
    }
  }


      landunit = {
    id       = { type = 10054 id = 6 }
    name     = "Western Department"
    location = 1889
    division = {
      id             = { type = 10054 id = 7 }
      name           = "3rd Division"
      type           = infantry
      model          = 2
      strength       = 100
      experience     = 15
    }
  }


  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
      landunit = {
    id       = { type = 10054 id = 42 }
    name     = "Hawaiian Department"
    location = 1734
    division = {
      id             = { type = 10054 id = 43 }
      name           = "Hawaiian Division"
      type           = infantry
      model          = 2
      strength       = 75
    }
  }


      landunit = {
    id       = { type = 10054 id = 44 }
    name     = "US Marines"
    location = 1968
    division = {
      id             = { type = 10054 id = 45 }
      name           = "Advanced Base Force"
      type           = marine
      model          = 0
      extra          = artillery
      brigade_model  = 1
      strength       = 32
      experience     = 50
    }
  }


      landunit = {
    id       = { type = 10054 id = 46 }
    name     = "Philippine Department"
    location = 1565
    division = {
      id             = { type = 10054 id = 47 }
      name           = "Philippine Division"
      type           = infantry
      model          = 2
      strength       = 100
      experience     = 5
    }
    division = {
      id             = { type = 10054 id = 48 }
      name           = "Philippine Scouts"
      type           = militia
      model          = 1
      strength       = 30
      experience     = 5
    }
  }


      landunit = {
    id       = { type = 10054 id = 49 }
    name     = "Canal Zone Garrison"
    location = 889
    division = {
      id             = { type = 10054 id = 50 }
      name           = "Canal Zone Garrison"
      type           = garrison
      model          = 1
      strength       = 30
      locked         = yes
    }
  }


      landunit = {
    id       = { type = 10054 id = 51 }
    name     = "Puerto Rico Garrison"
    location = 1765
    division = {
      id             = { type = 10054 id = 52 }
      name           = "Puerto Rico Garrison"
      type           = garrison
      model          = 1
      strength       = 20
      locked         = yes
    }
  }


      landunit = {
    id       = { type = 10054 id = 53 }
    name     = "Alaska District"
    location = 2141
    division = {
      id             = { type = 10054 id = 54 }
      name           = "Alaska District"
      type           = garrison
      model          = 1
      strength       = 10
      locked         = yes
    }
  }



  navalunit = {
    id       = { type = 10054 id = 500 }
    name     = "Atlantic Fleet"
    location = 2339
    base     = 1812
    division = {
      id             = { type = 10054 id = 521 }
      name           = "USS Kentucky"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 528 }
      name           = "USS Virginia"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 529 }
      name           = "USS Nebraska"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 530 }
      name           = "USS Georgia"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 531 }
      name           = "USS New Jersey"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 532 }
      name           = "USS Rhode Island"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 533 }
      name           = "USS Connecticut"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 534 }
      name           = "USS Louisiana"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 535 }
      name           = "USS Vermont"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 536 }
      name           = "USS Kansas"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 537 }
      name           = "USS Minnesota"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 538 }
      name           = "USS New Hampshire"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 539 }
      name           = "USS South Carolina"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 540 }
      name           = "USS Michigan"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 541 }
      name           = "USS Delaware"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 542 }
      name           = "USS North Dakota"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 543 }
      name           = "USS Florida"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 544 }
      name           = "USS Utah"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 545 }
      name           = "USS Wyoming"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 546 }
      name           = "USS Arkansas"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 547 }
      name           = "USS New York"
      type           = battleship
      model          = 1
    }
    {
      id             = { type = 10054 id = 548 }
      name           = "USS Texas"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 574 }
      name           = "USS San Francisco"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 583 }
      name           = "USS Des Moines"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 586 }
      name           = "USS Tacoma"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 587 }
      name           = "USS Cleveland"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 589 }
      name           = "USS Chester"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 590 }
      name           = "USS Birmingham"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 591 }
      name           = "USS Salem"
      type           = light_cruiser
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10054 id = 501 }
    name     = "Atlantic Escorts"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 10054 id = 570 }
      name           = "USS Seattle"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10054 id = 571 }
      name           = "USS Charlotte"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10054 id = 572 }
      name           = "USS Missoula"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10054 id = 597 }
      name           = "USS Paulding"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10054 id = 599 }
      name           = "USS Monaghan"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10054 id = 600 }
      name           = "USS Fanning"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10054 id = 602 }
      name           = "USS Aylwin"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10054 id = 502 }
    name     = "Atlantic Reserve Fleet"
    location = 1795
    base     = 1795
    division = {
      id             = { type = 10054 id = 520 }
      name           = "USS Kearsarge"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 522 }
      name           = "USS Illinois"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 523 }
      name           = "USS Alabama"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 525 }
      name           = "USS Maine"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 526 }
      name           = "USS Missouri"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 562 }
      name           = "USS Brooklyn"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 569 }
      name           = "USS Memphis"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 10054 id = 573 }
      name           = "USS Baltimore"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 575 }
      name           = "USS Olympia"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 578 }
      name           = "USS Columbia"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 579 }
      name           = "USS Minneapolis"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 596 }
      name           = "USS Smith"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10054 id = 503 }
    name     = "Atlantic Torpedo Fleet"
    location = 1953
    base     = 1953
    division = {
      id             = { type = 10054 id = 607 }
      name           = "USS C-1"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 610 }
      name           = "USS G-2"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 612 }
      name           = "USS K-1"
      type           = submarine
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10054 id = 504 }
    name     = "Atlantic Transport Fleet"
    location = 1795
    base     = 1795
    division = {
      id             = { type = 10054 id = 614 }
      name           = "1st Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 615 }
      name           = "2nd Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 616 }
      name           = "3rd Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 617 }
      name           = "4th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 618 }
      name           = "5th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 619 }
      name           = "6th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 620 }
      name           = "7th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 621 }
      name           = "8th Transport Flotilla"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10054 id = 505 }
    name     = "Pacific Fleet"
    location = 1889
    base     = 1889
    division = {
      id             = { type = 10054 id = 524 }
      name           = "USS Wisconsin"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 559 }
      name           = "USS St. Louis"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 560 }
      name           = "USS Charleston"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 565 }
      name           = "USS San Diego"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 568 }
      name           = "USS Huron"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 593 }
      name           = "USS Hopkins"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 595 }
      name           = "USS Truxton"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 10054 id = 506 }
    name     = "Pacific Mexican Task Force"
    location = 2384
    base     = 1886
    division = {
      id             = { type = 10054 id = 527 }
      name           = "USS Ohio"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 563 }
      name           = "USS Pittsburgh"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 564 }
      name           = "USS Huntington"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 566 }
      name           = "USS Pueblo"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 567 }
      name           = "USS Frederick"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 577 }
      name           = "USS Raleigh"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 580 }
      name           = "USS New Orleans"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 581 }
      name           = "USS Albany"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 582 }
      name           = "USS Denver"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 584 }
      name           = "USS Chattanooga"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 594 }
      name           = "USS Perry"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10054 id = 507 }
    name     = "Pacific Torpedo Fleet"
    location = 1889
    base     = 1889
    division = {
      id             = { type = 10054 id = 609 }
      name           = "USS F-1"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 611 }
      name           = "USS H-2"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10054 id = 508 }
    name     = "Pacific Transport Fleet"
    location = 1889
    base     = 1889
    division = {
      id             = { type = 10054 id = 622 }
      name           = "9th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 623 }
      name           = "10th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 624 }
      name           = "11th Transport Flotilla"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10054 id = 509 }
    name     = "Caribbean Squadron"
    location = 1922
    base     = 1922
    division = {
      id             = { type = 10054 id = 598 }
      name           = "USS Sterett"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 10054 id = 601 }
      name           = "USS Cassin"
      type           = destroyer
      model          = 2
    }
  }
  navalunit = {
    id       = { type = 10054 id = 510 }
    name     = "Caribbean Torpedo Squadron"
    location = 1922
    base     = 1922
    division = {
      id             = { type = 10054 id = 608 }
      name           = "USS D-1 (Narwhal)"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10054 id = 511 }
    name     = "Caribbean Transport Fleet"
    location = 1922
    base     = 1922
    division = {
      id             = { type = 10054 id = 625 }
      name           = "12th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 626 }
      name           = "13th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 627 }
      name           = "14th Transport Flotilla"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10054 id = 512 }
    name     = "Asiatic Fleet"
    location = 1683
    base     = 1683
    division = {
      id             = { type = 10054 id = 561 }
      name           = "USS Saratoga"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 10054 id = 576 }
      name           = "USS Cincinnati"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 585 }
      name           = "USS Galveston"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 592 }
      name           = "USS Bainbridge"
      type           = destroyer
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10054 id = 513 }
    name     = "Asiatic Torpedo Squadron"
    location = 1683
    base     = 1683
    division = {
      id             = { type = 10054 id = 605 }
      name           = "USS Porpoise"
      type           = submarine
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 606 }
      name           = "USS B-1"
      type           = submarine
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 10054 id = 514 }
    name     = "Asiatic Transport Fleet"
    location = 1683
    base     = 1683
    division = {
      id             = { type = 10054 id = 628 }
      name           = "15th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 629 }
      name           = "16th Transport Flotilla"
      type           = transport
      model          = 0
    }
    division = {
      id             = { type = 10054 id = 630 }
      name           = "17th Transport Flotilla"
      type           = transport
      model          = 0
    }
  }

  {
    id             = { type = 10054 id = 549 }
    name           = "USS Nevada"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1916 month = march day = 11 }
  }
  {
    id             = { type = 10054 id = 550 }
    name           = "USS Oklahoma"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1916 month = may day = 2 }
  }
  {
    id             = { type = 10054 id = 551 }
    name           = "USS Pennsylvania"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1916 month = june day = 12 }
  }
  {
    id             = { type = 10054 id = 552 }
    name           = "USS Arizona"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1916 month = october day = 17 }
  }
  {
    id             = { type = 10054 id = 553 }
    name           = "USS New Mexico"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1918 month = may day = 20 }
  }
  {
    id             = { type = 10054 id = 554 }
    name           = "USS Mississippi"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1917 month = december day = 18 }
  }
  {
    id             = { type = 10054 id = 555 }
    name           = "USS Idaho"
    type           = battleship
    model          = 1
    cost           = 0.4
    date           = { year = 1919 month = march day = 21 }
  }
  division_development = {
    id             = { type = 10054 id = 603 }
    name           = "USS O'Brien"
    type           = destroyer
    model          = 2
    cost           = 0.3
    date           = { year = 1914 month = july day = 20 }
  }
  division_development = {
    id             = { type = 10054 id = 604 }
    name           = "USS Tucker"
    type           = destroyer
    model          = 2
    cost           = 0.3
    date           = { year = 1915 month = may day = 4 }
  }
  division_development = {
    id             = { type = 10054 id = 613 }
    name           = "USS K-6"
    type           = submarine
    model          = 1
    cost           = 0.4
    date           = { year = 1914 month = september day = 9 }
  }
}
