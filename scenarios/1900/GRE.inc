##############################
# Country definition for GRE #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = GRE
  ai                 = "Minors/GRE_1914.ai"
  ai_settings        = { }
  capital            = 377 # Athens
  manpower           = 0
  # Resource Reserves
  energy         = 900
  metal          = 450
  rare_materials = 225
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 240
  escorts        = 15

  diplomacy = {
    relation = { tag = BUL value = -75 }
    relation = { tag = ENG value = 50 }
    relation = { tag = FRA value = 20 }
    relation = { tag = U08 value = 75 }
    relation = { tag = ITA value = -35 }
    relation = { tag = ALB value = -50 }
    relation = { tag = SER value = 75 }
    relation = { tag = U09 value = -25 }
    relation = { tag = OTT value = -75 }
    relation = {
      tag        = ROM
      value      = 100
      guaranteed = { year = 1914 month = june day = 1 }
    }
  }
  SpyInfo                = { country = "GRE" NumberOfSpies = 6 }

  nationalprovinces      = { 328 333 363 368 370 371 372 373 374 375 376 377 378 379 381 384 387 388 409 1077 }
  ownedprovinces         = { 368 371 372 373 374 375 376 377 381 }
  controlledprovinces    = { 368 371 372 373 374 375 376 377 381 }
  claimedprovinces       = { 1057 1076 1078 1079 }

  techapps               = { 1010 1020 1160 1170 3010 3110 3210 3220 3410 3610 3810 5310 5800 6500 6510 8010 8020 8050 8060 8070 8100 8500 13060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 8
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 6
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 90344 } # George I
  headofgovernment       = { type = 9 id = 90195 } # Eleftherios Venizelos
  foreignminister        = { type = 9 id = 90187 } # Eleftherios Venizelos
  armamentminister       = { type = 9 id = 90214 } # Alexandros Diomidis
  ministerofsecurity     = { type = 9 id = 90228 } # Emmanouil Repoulis
  ministerofintelligence = { type = 9 id = 90237 } # Eksadaktilos Athanasios
  chiefofstaff           = { type = 9 id = 90238 } # Ioannis Metaxas
  chiefofarmy            = { type = 9 id = 90239 } # Constantine I
  chiefofnavy            = { type = 9 id = 90240 } # Mark Kerr

  landunit = {
    id       = { type = 19111 id = 24 }
    name     = "Vasilikos Ellinikos Stratos"
    location = 377
    division = {
      id             = { type = 19111 id = 25 }
      name           = "Vasilikos Ellinikos Stratos"
      type           = hq
      model          = 0
      strength       = 75
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19111 id = 1 }
    name     = "A Soma Stratou"
    location = 377
    division = {
      id             = { type = 19111 id = 2 }
      name           = "I Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 3 }
      name           = "II Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 4 }
      name           = "XIII Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19111 id = 5 }
    name     = "B Soma Stratou"
    location = 372
    division = {
      id             = { type = 19111 id = 6 }
      name           = "III Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 7 }
      name           = "IV Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 8 }
      name           = "XIV Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19111 id = 9 }
    name     = "C Soma Stratou"
    location = 368
    division = {
      id             = { type = 19111 id = 10 }
      name           = "X Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 11 }
      name           = "XI Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 12 }
      name           = "XII Merarchia"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 50
      experience     = 5
    }
  }
  landunit = {
    id       = { type = 19111 id = 13 }
    name     = "D Soma Stratou"
    location = 374
    division = {
      id             = { type = 19111 id = 14 }
      name           = "V Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 15 }
      name           = "VI Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 16 }
      name           = "VII Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19111 id = 17 }
    name     = "E Soma Stratou"
    location = 376
    division = {
      id             = { type = 19111 id = 18 }
      name           = "VIII Merarchia"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 50
      experience     = 20
    }
    division = {
      id             = { type = 19111 id = 19 }
      name           = "IX Merarchia"
      type           = infantry
      model          = 2
      strength       = 40
      experience     = 20
    }
  }

  navalunit = {
    id       = { type = 19111 id = 500 }
    name     = "Basilikos Stolos"
    location = 377
    base     = 377
    division = {
      id             = { type = 19111 id = 501 }
      name           = "Kilkis"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 502 }
      name           = "Limnos"
      type           = battleship
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 503 }
      name           = "BEN Georgios Averoff"
      type           = heavy_cruiser
      model          = 2
    }
    division = {
      id             = { type = 19111 id = 504 }
      name           = "BEN Helle"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 505 }
      name           = "BEN Hydra"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 506 }
      name           = "BEN Spetsai"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 507 }
      name           = "BEN Psara"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 19111 id = 508 }
      name           = "1. Torpilakatos"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 19111 id = 509 }
      name           = "2. Torpilakatos"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 19111 id = 510 }
      name           = "3. Torpilakatos"
      type           = destroyer
      model          = 2
    }
    division = {
      id             = { type = 19111 id = 511 }
      name           = "4. Torpilakatos"
      type           = destroyer
      model          = 1
    }
  }

  }
