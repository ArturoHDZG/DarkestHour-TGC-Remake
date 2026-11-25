##############################
# Country definition for POR #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = POR
  ai                 = "Minors/POR_1914.ai"
  ai_settings        = { }
  capital            = 476 # Lisbon
  manpower           = 19
  # Resource Reserves
  energy         = 1020
  metal          = 510
  rare_materials = 255
  oil            = 500
  supplies       = 500
  money          = 15
  transports     = 250
  escorts        = 7

  diplomacy = {
    relation = { tag = BEL value = -20 }
    relation = { tag = BRA value = 75 }
    relation = { tag = ENG value = 100 }
    relation = { tag = U08 value = 75 }
    relation = { tag = ITA value = 65 }
    relation = { tag = SAF value = 125 access = yes }
    relation = { tag = SPR value = -50 }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 5 }

  nationalprovinces      = { 481 476 479 477 478 482 480 }
  ownedprovinces         = { 481 476 479 477 478 995 992 963 912 895 890 892 887 891 888 855 856 857 858 854 853 1617 1372 893 480 482 994 1513 }
  controlledprovinces    = { 481 476 479 477 478 995 992 963 912 895 890 892 887 891 888 855 856 857 858 854 853 1617 1372 893 480 482 994 1513 }
  claimedprovinces       = { 853 854 855 856 857 858 887 888 890 891 892 893 895 912 963 992 994 995 1372 1513 1617 }

  techapps               = { 1010 1020 1160 3010 3110 3610 3810 6500 6510 8010 8020 8050 8060 8070 8100 13060 13070 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 4
    free_market       = 5
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 20105 } # Manuel d'Arriaga
  headofgovernment       = { type = 9 id = 20124 } # Bernadino Machado
  chiefofstaff           = { type = 9 id = 20077 } # João José Sinel de Cordes
  chiefofarmy            = { type = 9 id = 20069 } # João José Sinel de Cordes

  landunit = {
    id       = { type = 19600 id = 1000 }
    name     = "1a Região Militar"
    location = 476
    division = {
      id             = { type = 19600 id = 1001 }
      name           = "1a Divisão de Infantaria"
      type           = infantry
      model          = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19600 id = 1002 }
    name     = "2a Região Militar"
    location = 479
    division = {
      id             = { type = 19600 id = 1035 }
      name           = "2a Divisão de Infantaria"
      type           = infantry
      model          = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19600 id = 1009 }
    name     = "3a Região Militar"
    location = 481
    division = {
      id             = { type = 19600 id = 1010 }
      name           = "3a Divisão de Infantaria"
      type           = infantry
      model          = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19600 id = 1011 }
    name     = "4a Região Militar"
    location = 480
    division = {
      id             = { type = 19600 id = 1012 }
      name           = "4a Divisão de Infantaria"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19600 id = 1013 }
    name     = "5a Região Militar"
    location = 479
    division = {
      id             = { type = 19600 id = 1014 }
      name           = "5a Divisão de Infantaria"
      type           = infantry
      model          = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19600 id = 1015 }
    name     = "6a Região Militar"
    location = 481
    division = {
      id             = { type = 19600 id = 1016 }
      name           = "6a Divisão de Infantaria"
      type           = infantry
      model          = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19600 id = 1017 }
    name     = "7a Região Militar"
    location = 482
    division = {
      id             = { type = 19600 id = 1018 }
      name           = "7a Divisão de Infantaria"
      type           = infantry
      model          = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19600 id = 1019 }
    name     = "8a Região Militar"
    location = 481
    division = {
      id             = { type = 19600 id = 1020 }
      name           = "8a Divisão de Infantaria"
      type           = infantry
      model          = 2
      strength       = 20
    }
  }
  landunit = {
    id       = { type = 19600 id = 1021 }
    name     = "Comando Militar dos Açores"
    location = 995
    division = {
      id             = { type = 19600 id = 1022 }
      name           = "Comando Militar dos Açores"
      type           = garrison
      model          = 1
      strength       = 10
      max_strength   = 40
    }
  }
  landunit = {
    id       = { type = 19600 id = 1023 }
    name     = "Comando Militar da Madeira"
    location = 994
    division = {
      id             = { type = 19600 id = 1024 }
      name           = "Comando Militar da Madeira"
      type           = garrison
      model          = 1
      strength       = 5
      max_strength   = 20
    }
  }
  landunit = {
    id       = { type = 19600 id = 1025 }
    name     = "Comando Militar de Angola"
    location = 895
    division = {
      id             = { type = 19600 id = 1026 }
      name           = "Comando Militar de Angola"
      type           = militia
      model          = 1
      strength       = 50
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 19600 id = 1027 }
    name     = "Comando Militar da India"
    location = 1513
    division = {
      id             = { type = 19600 id = 1028 }
      name           = "Comando Militar da India"
      type           = militia
      model          = 1
      strength       = 10
      max_strength   = 10
    }
  }
  landunit = {
    id       = { type = 19600 id = 1029 }
    name     = "Comando Militar de Moçambique"
    location = 855
    division = {
      id             = { type = 19600 id = 1030 }
      name           = "Comando Militar de Moçambique"
      type           = militia
      model          = 1
      strength       = 20
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 19600 id = 1031 }
    name     = "Comando Militar de Timor Leste"
    location = 1617
    division = {
      id             = { type = 19600 id = 1032 }
      name           = "Comando Militar de Timor Leste"
      type           = militia
      model          = 1
      strength       = 5
      max_strength   = 5
    }
  }
  landunit = {
    id       = { type = 19600 id = 1033 }
    name     = "Comando Militar de Macau"
    location = 1372
    division = {
      id             = { type = 19600 id = 1034 }
      name           = "Comando Militar de Macau"
      type           = militia
      model          = 1
      strength       = 5
      max_strength   = 5
    }
  }

  navalunit = {
    id       = { type = 19600 id = 1003 }
    name     = "Transporte de Navio do Portugal"
    location = 476
    base     = 476
    division = {
      id             = { type = 19600 id = 1004 }
      name           = "1o Flotilha de Navio de Transporte"
      type           = transport
    }
  }
  navalunit = {
    id       = { type = 19600 id = 1005 }
    name     = "Transporte de Navio de Colonias"
    location = 963
    base     = 963
    division = {
      id             = { type = 19600 id = 1006 }
      name           = "2o Flotilha de Navio de Transporte"
      type           = transport
    }
    division = {
      id             = { type = 19600 id = 1007 }
      name           = "Douro Flotilha"
      type           = destroyer
      model          = 1
    }
  }
  navalunit = {
    id       = { type = 19600 id = 9302 }
    name     = "Marinha do Portugal"
    location = 476
    base     = 476
    division = {
      id             = { type = 19600 id = 1008 }
      name           = "Vasco da Gama"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 19600 id = 9303 }
      name           = "Viana do Castello Flotilha"
      type           = destroyer
      model          = 0
      strength       = 100
    }
    division = {
      id             = { type = 19600 id = 9304 }
      name           = "1o Flotilha de Submarino"
      type           = submarine
      model          = 1
      strength       = 100
    }
  }

  }
