##############################
# Country definition for HOL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = HOL
  ai                 = "Minors/HOL_1914.ai"
  ai_settings        = { }
  capital            = 122 # Amsterdam
  manpower           = 22
  # Resource Reserves
  energy         = 1740
  metal          = 870
  rare_materials = 435
  oil            = 500
  supplies       = 500
  money          = 40
  transports     = 250
  escorts        = 21

  diplomacy = {
    relation = { tag = BEL value = 125 }
    relation = { tag = CAN value = 25 }
    relation = { tag = DEN value = 100 }
    relation = { tag = ENG value = 75 }
    relation = { tag = FRA value = 50 }
    relation = { tag = U08 value = 50 }
    relation = { tag = ITA value = 20 }
    relation = { tag = JAP value = 25 }
    relation = { tag = LUX value = 150 }
    relation = { tag = MEX value = 25 }
    relation = { tag = NOR value = 100 }
    relation = { tag = SWE value = 100 }
    relation = { tag = USA value = 70 }
  }
  SpyInfo                = { country = "HOL" NumberOfSpies = 6 }

  nationalprovinces      = { 118 119 120 121 122 123 124 125 }
  ownedprovinces         = { 118 119 120 121 122 123 124 125 1761 1762 1999 }
  controlledprovinces    = { 118 119 120 121 122 123 124 125 1761 1762 1999 }
  claimedprovinces       = { 1761 1762 1999 }

  techapps               = { 1010 1020 3010 3110 3210 3220 3410 3420 3610 3810 6500 6510 8010 8020 8050 8060 8070 8100 8500 13060 13070 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 4
    freedom           = 9
    free_market       = 9
    professional_army = 4
    defense_lobby     = 2
    interventionism   = 2
  }
  headofstate            = { type = 9 id = 15174 } # Wilhelmina
  headofgovernment       = { type = 9 id = 15169 } # Pieter Cort van der Linden
  foreignminister        = { type = 9 id = 15162 } # John Loudon
  armamentminister       = { type = 9 id = 15176 } # Anthonij Bertling
  ministerofsecurity     = { type = 9 id = 15190 } # Pieter Cort van der Linden
  chiefofstaff           = { type = 9 id = 15156 } # Cornelis Snijders
  chiefofarmy            = { type = 9 id = 15149 } # Cornelis Snijders
  chiefofair             = { type = 9 id = 15148 } # Hendrik Walaardt Sacré

  landunit = {
    id       = { type = 18500 id = 1 }
    name     = "Ie Legerkorps"
    location = 125
    division = {
      id             = { type = 18500 id = 2 }
      name           = "1e Divisie"
      type           = infantry
      model          = 2
      extra          = engineer
      brigade_model  = 0
      strength       = 40
    }
    division = {
      id             = { type = 18500 id = 3 }
      name           = "5e Divisie"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 18500 id = 4 }
    name     = "IIe Legerkorps"
    location = 119
    division = {
      id             = { type = 18500 id = 5 }
      name           = "2e Divisie"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 40
    }
    division = {
      id             = { type = 18500 id = 6 }
      name           = "6e Divisie"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 18500 id = 7 }
    name     = "IIIe Legerkorps"
    location = 118
    division = {
      id             = { type = 18500 id = 8 }
      name           = "3e Divisie"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 18500 id = 9 }
      name           = "7e Divisie"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }
  landunit = {
    id       = { type = 18500 id = 10 }
    name     = "IVe Legerkorps"
    location = 120
    division = {
      id             = { type = 18500 id = 11 }
      name           = "4e Divisie"
      type           = infantry
      model          = 2
      strength       = 40
    }
    division = {
      id             = { type = 18500 id = 12 }
      name           = "8e Divisie"
      type           = infantry
      model          = 1
      strength       = 10
    }
  }

  navalunit = {
    id       = { type = 18500 id = 500 }
    name     = "Koninklijke Marine"
    location = 122
    base     = 122
    division = {
      id             = { type = 18500 id = 501 }
      name           = "De Zeven Provincien"
      type           = battleship
      model          = 0
    }
    division = {
      id             = { type = 18500 id = 502 }
      name           = "Kortenaer"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 503 }
      name           = "Marten H. Tromp"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 504 }
      name           = "Holland"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 18500 id = 505 }
      name           = "Zeeland"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 18500 id = 506 }
      name           = "Noord Brabant"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 18500 id = 507 }
      name           = "1e Flotilla"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 18500 id = 508 }
      name           = "2e Flotilla"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 18500 id = 509 }
      name           = "4e Flotilla"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 18500 id = 516 }
    name     = "West Indies Squadron"
    location = 1596
    base     = 1596
    division = {
      id             = { type = 18500 id = 517 }
      name           = "Jacob van Heemskerck"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 18500 id = 518 }
      name           = "Friesland"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 18500 id = 519 }
      name           = "Gelderland"
      type           = light_cruiser
      model          = 0
    }
  }
}
