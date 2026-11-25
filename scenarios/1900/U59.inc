##############################
# Country definition for U59 #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = U59
  ai_settings        = { }
  capital            = 1972 # Acapulco de Juarez
  manpower           = 50
  # Resource Reserves
  energy         = 1000
  metal          = 1000
  rare_materials = 500
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 10

  diplomacy = {
    relation = { tag = USA value = -100 }
    relation = { tag = MEX value = -200 }
    relation = { tag = U57 value = 100 }
  }

  nationalprovinces      = { 1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 }
  ownedprovinces         = { 1971 1972 }
  controlledprovinces    = { 1971 1972 }

  techapps               = { 1010 1020 1160 1170 3010 5310 5800 6500 6510 13060 13070 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 7
    freedom           = 9
    free_market       = 6
    professional_army = 5
    defense_lobby     = 9
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 1110001 } # Emiliano Zapata
  headofgovernment       = { type = 9 id = 1110002 } # Emiliano Zapata
  foreignminister        = { type = 9 id = 1110008 } # Gildardo Magaña Cerda
  ministerofintelligence = { type = 9 id = 1110039 } # Emiliano Zapata
  chiefofstaff           = { type = 9 id = 1110015 } # Otilio Montaño Sánchez
  chiefofarmy            = { type = 9 id = 1110011 } # Amador Salazar Jiménez
  chiefofnavy            = { type = 9 id = 1110005 } # Manuel Palafox
  chiefofair             = { type = 9 id = 1110006 } # Manuel Palafox

  landunit = {
    id       = { type = 24002 id = 1 }
    name     = "Ejército Libertador del Sur"
    location = 1972
    division = {
      id             = { type = 24002 id = 2 }
      name           = "Tropas de Emiliano Zapata"
      type           = bergsjaeger
      model          = 1
      strength       = 30
      experience     = 20
    }
    division = {
      id             = { type = 24002 id = 3 }
      name           = "Milicia Morelense"
      type           = militia
      model          = 1
      strength       = 15
      experience     = 10
    }
  }
  landunit = {
    id       = { type = 24002 id = 4 }
    name     = "Milicia Guerrerense"
    location = 1971
    division = {
      id             = { type = 24002 id = 5 }
      name           = "Milicia Guerrerense"
      type           = militia
      model          = 1
      strength       = 15
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 24002 id = 6 }
    name     = "Caballería Morelense"
    location = 1972
    division = {
      id             = { type = 24002 id = 7 }
      name           = "Caballería Morelense"
      type           = cavalry
      model          = 1
      strength       = 15
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 24002 id = 8 }
    name     = "Caballería Guerrerense"
    location = 1971
    division = {
      id             = { type = 24002 id = 9 }
      name           = "Caballería Guerrerense"
      type           = cavalry
      model          = 1
      strength       = 10
      experience     = 5
    }
  }
}
