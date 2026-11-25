##############################
# Country definition for COL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = COL
  ai                 = "Minors/COL_1914.ai"
  ai_settings        = { }
  capital            = 1991 # Santa Fe de Bogota
  dissent            = 15 # Thousand Days' War (1899-1902)
  manpower           = 4
  # Resource Reserves
  energy         = 660
  metal          = 330
  rare_materials = 165
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = 10 }
    relation = { tag = BOL value = 1 }
    relation = { tag = BRA value = 10 }
    relation = { tag = CHL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = U08 value = 0 }
    relation = { tag = PAN value = 50 }
    relation = { tag = PAR value = 10 }
    relation = { tag = PRU value = -35 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = 75 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "COL" NumberOfSpies = 3 }

  nationalprovinces      = { 1756 1985 1986 1987 1990 1991 1994 2009 2077 2078 889 }
  ownedprovinces         = { 1756 1985 1986 1987 1990 1991 1994 2009 2077 2078 889 }
  controlledprovinces    = { 1756 1985 1986 1987 1990 1991 1994 2009 2077 2078 889 }
  claimedprovinces       = { 2077 2078 889 }

  techapps               = { 1010 1020 3010 3810 6500 6510 8010 8050 13060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 4
    freedom           = 5
    free_market       = 7
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 175180 } # José Vicente Concha

  landunit = {
    id       = { type = 23000 id = 40 }
    name     = "1o. Cuerpo del Ejército"
    location = 1991
    division = {
      id             = { type = 23000 id = 4000 }
      name           = "1a. División de Infantería"
      type           = infantry
      model          = 0
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 23000 id = 4001 }
    name     = "2o. Cuerpo del Ejército"
    location = 1986
    division = {
      id             = { type = 23000 id = 4006 }
      name           = "2a. División de Infantería"
      type           = infantry
      model          = 0
      strength       = 15
    }
  }
  landunit = {
    id       = { type = 23000 id = 4007 }
    name     = "3er. Cuerpo del Ejército"
    location = 1985
    division = {
      id             = { type = 23000 id = 4008 }
      name           = "3a. División de Infantería"
      type           = infantry
      model          = 0
      strength       = 15
    }
  }

  navalunit = {
    id       = { type = 23000 id = 4002 }
    name     = "Armada de Colombia"
    location = 1990
    base     = 1990
    division = {
      id             = { type = 23000 id = 4004 }
      name           = "Almirante Lezo"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 23000 id = 4003 }
      name           = "1a. Flotilla de Torpedillos"
      type           = destroyer
      model          = 0
    }
  }
}
