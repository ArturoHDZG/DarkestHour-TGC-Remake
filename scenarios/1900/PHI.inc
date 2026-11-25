##############################
# Country definition for PHI #
# First Philippine Republic  #
##############################

country = {
  tag                = PHI
  ai                 = "Minors/PHI_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes } }
  capital            = 1566 # Cabanatuan
  manpower           = 30
  # Resource Reserves
  energy         = 400
  metal          = 200
  rare_materials = 150
  oil            = 50
  supplies       = 500
  money          = 20
  transports     = 15

  diplomacy = {
    relation = { tag = USA value = -200 }
    relation = { tag = JAP value = 50 }
    relation = { tag = SPA value = -50 }
  }
  SpyInfo                = { country = "PHI" NumberOfSpies = 2 }

  nationalprovinces      = { 1565 1566 1567 1568 1569 1570 1571 1572 1573 1574 1575 1576 1577 1578 1579 1580 }
  ownedprovinces         = { 1566 1567 1568 1570 1571 1573 1574 1575 1576 1578 1579 }
  controlledprovinces    = { 1566 1567 1568 1570 1571 1573 1574 1575 1576 1578 1579 }

  techapps               = { 1010 1160 3010 6500 8010 13060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 5
    freedom           = 6
    free_market       = 5
    professional_army = 2
    defense_lobby     = 10
    interventionism   = 8
  }

  headofstate            = { type = 9 id = 325012 } # Emilio Aguinaldo
  headofgovernment       = { type = 9 id = 325026 } # Emilio Aguinaldo

  landunit = {
    id       = { type = 32500 id = 1 }
    name     = "Ejercito Revolucionario de Filipinas"
    location = 1566
    division = {
      id             = { type = 32500 id = 2 }
      name           = "1a Division de Luzon"
      type           = infantry
      model          = 0
      strength       = 80
      experience     = 15
    }
    division = {
      id             = { type = 32500 id = 3 }
      name           = "Milicias de Tarlac y Nueva Ecija"
      type           = militia
      model          = 1
      strength       = 70
      experience     = 10
    }
  }

  landunit = {
    id       = { type = 32500 id = 4 }
    name     = "Fuerzas del Norte de Luzon"
    location = 1567
    division = {
      id             = { type = 32500 id = 5 }
      name           = "Brigada del Ilocos"
      type           = infantry
      model          = 0
      strength       = 60
      experience     = 15
    }
  }

  landunit = {
    id       = { type = 32500 id = 6 }
    name     = "Ejercito Libertador de Visayas"
    location = 1574
    division = {
      id             = { type = 32500 id = 7 }
      name           = "Division de Bisayas"
      type           = militia
      model          = 1
      strength       = 60
      experience     = 10
    }
  }
}
