##############################
# Country definition for SWE #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = SWE
  ai                 = "Minors/SWE_1914.ai"
  ai_settings        = { }
  capital            = 2159 # Stockholm
  manpower           = 15
  # Resource Reserves
  energy         = 1320
  metal          = 660
  rare_materials = 330
  oil            = 500
  supplies       = 500
  money          = 20
  transports     = 100

  diplomacy = {
    relation = { tag = BEL value = 100 }
    relation = { tag = DEN value = 75 }
    relation = { tag = ENG value = 80 }
    relation = { tag = U08 value = 100 }
    relation = { tag = HOL value = 100 }
    relation = { tag = LUX value = 100 }
    relation = { tag = NOR value = 150 }
    relation = { tag = PER value = 50 }
    relation = { tag = USA value = 75 }
    relation = { tag = RUS value = 25 }
  }
  SpyInfo                = { country = "SWE" NumberOfSpies = 5 }

  nationalprovinces      = { 526 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }
  ownedprovinces         = { 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }
  controlledprovinces    = { 2152 2153 2154 2155 2156 2157 2158 2159 2160 2161 2162 2163 2164 2165 2166 2167 }

  techapps               = { 1010 1020 1160 1170 3010 3110 3210 3220 3410 3420 3610 3810 6500 6510 8010 8020 8050 8060 8070 8100 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 7
    political_left    = 3
    freedom           = 6
    free_market       = 9
    professional_army = 4
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 40157 } # Gustav V
  headofgovernment       = { type = 9 id = 40138 } # Hjalmar Hammarskjöld
  foreignminister        = { type = 9 id = 40120 } # Knut Wallenberg
  armamentminister       = { type = 9 id = 40166 } # Axel Vennersten
  ministerofsecurity     = { type = 9 id = 40186 } # Berndt Hasselrot
  chiefofstaff           = { type = 9 id = 40106 } # Knut Gillis Bildt
  chiefofarmy            = { type = 9 id = 40094 } # Gustav V
  chiefofnavy            = { type = 9 id = 40102 } # Ludvig Sidner

  landunit = {
    id       = { type = 12111 id = 1 }
    name     = "I. Distrikt"
    location = 2152
    division = {
      id             = { type = 12111 id = 2 }
      name           = "I. Arméfördelning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 3 }
    name     = "II. Distrikt"
    location = 2157
    division = {
      id             = { type = 12111 id = 4 }
      name           = "II. Arméfördelning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 5 }
    name     = "III. Distrikt"
    location = 2161
    division = {
      id             = { type = 12111 id = 6 }
      name           = "III. Arméfördelning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 7 }
    name     = "IV. Distrikt"
    location = 2159
    division = {
      id             = { type = 12111 id = 8 }
      name           = "IV. Arméfördelning"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 9 }
    name     = "V. Distrikt"
    location = 2158
    division = {
      id             = { type = 12111 id = 10 }
      name           = "V. Arméfördelning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 11 }
    name     = "VI. Distrikt"
    location = 2164
    division = {
      id             = { type = 12111 id = 12 }
      name           = "VI. Arméfördelning"
      type           = infantry
      model          = 2
      strength       = 40
    }
  }
  landunit = {
    id       = { type = 12111 id = 13 }
    name     = "Norrland Militärt Omrade"
    location = 2166
    division = {
      id             = { type = 12111 id = 14 }
      name           = "Bodens Trupper"
      type           = garrison
      model          = 1
      strength       = 20
      max_strength   = 100
    }
  }
  landunit = {
    id       = { type = 12111 id = 15 }
    name     = "Gotland Militärt Omrade"
    location = 2156
    division = {
      id             = { type = 12111 id = 16 }
      name           = "Gotlands Trupper"
      type           = garrison
      model          = 1
      strength       = 20
      max_strength   = 100
    }
  }

  navalunit = {
    id       = { type = 12111 id = 500 }
    name     = "Svenska Flottan"
    location = 2155
    base     = 2155
    division = {
      id             = { type = 12111 id = 501 }
      name           = "Svea"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 502 }
      name           = "Göta"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 503 }
      name           = "Thule"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 504 }
      name           = "Oden"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 505 }
      name           = "Thor"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 506 }
      name           = "Niord"
      type           = heavy_cruiser
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 507 }
      name           = "Dristigheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 508 }
      name           = "Äran"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 509 }
      name           = "Wasa"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 510 }
      name           = "Tapperheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 511 }
      name           = "Manligheten"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 512 }
      name           = "Oscar II"
      type           = heavy_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 513 }
      name           = "Fylgia"
      type           = light_cruiser
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 514 }
      name           = "1:a Jagarflottiljen"
      type           = destroyer
      model          = 1
    }
    division = {
      id             = { type = 12111 id = 515 }
      name           = "2:a Jagarflottiljen"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 516 }
      name           = "3:e Jagarflottiljen"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 517 }
      name           = "4:e Jagarflottiljen"
      type           = destroyer
      model          = 0
    }
    division = {
      id             = { type = 12111 id = 518 }
      name           = "Transportflottiljen"
      type           = transport
      model          = 0
    }
  }
  navalunit = {
    id       = { type = 12111 id = 519 }
    name     = "Ubåtsflottiljen"
    location = 2159
    base     = 2159
    division = {
      id             = { type = 12111 id = 520 }
      name           = "1:a Ubåtsflottiljen"
      type           = submarine
      model          = 1
    }
  }

  division_development = {
    id             = { type = 12111 id = 521 }
    name           = "Sverige"
    type           = battleship
    model          = 0
    cost           = 0.4
    date           = { year = 1917 month = may day = 10 }
  }
}
