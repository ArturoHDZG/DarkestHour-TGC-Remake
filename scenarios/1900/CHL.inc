##############################
# Country definition for CHL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = CHL
  ai                 = "Minors/CHL_1914.ai"
  ai_settings        = { }
  capital            = 2023 # Santiago de Chile
  manpower           = 10
  # Resource Reserves
  energy         = 720
  metal          = 360
  rare_materials = 180
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = { tag = ARG value = -20 }
    relation = { tag = BOL value = -50 }
    relation = { tag = BRA value = 10 }
    relation = { tag = COL value = 15 }
    relation = { tag = ECU value = 20 }
    relation = { tag = U08 value = 50 }
    relation = { tag = U09 value = 50 }
    relation = { tag = SPA value = 50 }
    relation = { tag = ITA value = 30 }
    relation = { tag = JAP value = 20 }
    relation = { tag = PAR value = 35 }
    relation = { tag = PRU value = -25 }
    relation = { tag = URU value = 20 }
    relation = { tag = USA value = 100 }
    relation = { tag = VEN value = 20 }
  }
  SpyInfo                = { country = "CHL" NumberOfSpies = 3 }

  nationalprovinces      = { 2022 2023 2024 2025 2030 2031 2032 2043 }
  ownedprovinces         = { 2022 2023 2024 2025 2030 2031 2032 2043 }
  controlledprovinces    = { 2022 2023 2024 2025 2030 2031 2032 2043 }

  techapps               = { 1010 1020 1160 3010 3110 3210 3410 3610 3810 6500 6510 8010 8020 8050 8060 8070 8100 13060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 5
    freedom           = 7
    free_market       = 8
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 210140 } # Guillermo Soublette Garin
  headofgovernment       = { type = 9 id = 210145 } # Francisco Neff
  foreignminister        = { type = 9 id = 210158 } # Juan Luis Sanfuentes
  armamentminister       = { type = 9 id = 210194 } # Alfredo Barros Errázuriz
  ministerofsecurity     = { type = 9 id = 210243 } # Pedro Nicolás Montenegro Onel
  ministerofintelligence = { type = 9 id = 210270 } # Jorge Boonen Rivera
  chiefofstaff           = { type = 9 id = 210273 } # Jorge Boonen Rivera
  chiefofarmy            = { type = 9 id = 210278 } # Jorge Boonen Rivera
  chiefofnavy            = { type = 9 id = 210283 } # Luis Alberto Goñi Simpson
  chiefofair             = { type = 9 id = 210289 } # Pedro Pablo Dartnell

  landunit = {
    id       = { type = 12500 id = 1 }
    name     = "Region militar I"
    location = 2024
    division = {
      id             = { type = 12500 id = 2 }
      name           = "Ia. División de Ejercito"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 12500 id = 3 }
    name     = "Region militar II"
    location = 2023
    division = {
      id             = { type = 12500 id = 4 }
      name           = "IIa. División de Ejercito"
      type           = infantry
      model          = 1
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 30
    }
  }
  landunit = {
    id       = { type = 12500 id = 5 }
    name     = "Region militar III"
    location = 2032
    division = {
      id             = { type = 12500 id = 6 }
      name           = "IIIa. División de Ejercito"
      type           = infantry
      model          = 1
      strength       = 25
    }
  }
  landunit = {
    id       = { type = 12500 id = 7 }
    name     = "Region militar IV"
    location = 2031
    division = {
      id             = { type = 12500 id = 8 }
      name           = "IVa. División de Ejercito"
      type           = infantry
      model          = 1
      strength       = 25
    }
  }

  navalunit = {
    id       = { type = 12500 id = 500 }
    name     = "Armada Chilena"
    location = 2023
    base     = 2023
    division = {
      id             = { type = 12500 id = 501 }
      name           = "Capitán Prat"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 502 }
      name           = "Esmeralda"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 503 }
      name           = "O'Higgins"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 504 }
      name           = "Presidente Errazuriz"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 505 }
      name           = "Blanco Encalada"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 506 }
      name           = "Ministro Zenteno"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 507 }
      name           = "Chacabuco"
      type           = light_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 508 }
      name           = "1a. Flotilla de Destructores"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 509 }
      name           = "2a. Flotilla de Destructores"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12500 id = 510 }
      name           = "3a. Flotilla de Destructores"
      type           = destroyer
      model          = 0
    }
  }
}
