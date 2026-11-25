##############################
# Country definition for BUL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BUL
  ai                 = "Minors/BUL_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes } }
  capital            = 321 # Sofia
  manpower           = 24
  # Resource Reserves
  energy         = 1500
  metal          = 750
  rare_materials = 375
  oil            = 500
  supplies       = 500
  money          = 50
  transports     = 110
  escorts        = 4

  diplomacy = {
    relation = { tag = ENG value = 20 }
    relation = { tag = FRA value = 30 }
    relation = { tag = U08 value = 150 }
    relation = { tag = U09 value = 100 }
    relation = { tag = GRE value = -150 }
    relation = { tag = ROM value = -25 }
    relation = { tag = RUS value = 75 }
    relation = { tag = OTT value = -50 }
    relation = { tag = SER value = -150 }
    relation = { tag = MTN value = -50 }
    relation = { tag = ALB value = 200 }
  }
  SpyInfo                = { country = "BUL" NumberOfSpies = 6 }

  nationalprovinces      = { 318 323 325 324 321 320 319 326 364 370 317 331 307 322 328 333 363 365 366 }
  ownedprovinces         = { 317 318 319 320 321 322 323 324 325 326 370 363 }
  controlledprovinces    = { 317 318 319 320 321 322 323 324 325 326 370 363 }
  claimedprovinces       = { 334 385 }

  techapps               = { 4500 4600 4610 1010 1020 1030 13060 13070 13080 1160 1170 1830 1910 1920 2290 5810 5700 5800 5310 5600 3810 6500 6510 6530 6590 8010 8020 8040 8050 8060 8070 8080 8100 8110 81300 27480 27490 27500 27510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 4
    political_left    = 4
    freedom           = 5
    free_market       = 6
    professional_army = 6
    defense_lobby     = 9
    interventionism   = 9
  }
  headofstate            = { type = 9 id = 95205 } # Ferdinand I
  headofgovernment       = { type = 9 id = 95196 } # Vasil Radoslavov
  foreignminister        = { type = 9 id = 95185 } # Vasil Radoslavov
  armamentminister       = { type = 9 id = 95218 } # Dimitar Tonchev
  ministerofsecurity     = { type = 9 id = 95233 } # Aleksandar Radolov
  ministerofintelligence = { type = 9 id = 95202 } # Atanas Vatev
  chiefofstaff           = { type = 9 id = 95239 } # Pravoslav Tenev
  chiefofarmy            = { type = 9 id = 95139 } # Kliment Boyadzhiev
  chiefofnavy            = { type = 9 id = 95151 } # Konstantin Kirkov
  chiefofair             = { type = 9 id = 95138 } # Vasil Zlatarov

  landunit = {
    id       = { type = 19000 id = 1 }
    name     = "Tsarska Bulgarska Armija"
    location = 321
    division = {
      id             = { type = 19000 id = 2 }
      name           = "Tsarska Bulgarska Armija"
      type           = hq
      model          = 0
      strength       = 10
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 3 }
      name           = "Kavalerijska Divizija"
      type           = cavalry
      model          = 1
      strength       = 30
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 4 }
    name     = "1-a 'Sofijska' Pekhotna Divizija"
    location = 321
    division = {
      id             = { type = 19000 id = 5 }
      name           = "1-a Armija"
      type           = hq
      model          = 0
      strength       = 10
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 6 }
      name           = "I/1-a 'Sofijska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 15
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 7 }
      name           = "II/1-a 'Sofijska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 15
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 8 }
      name           = "III/1-a 'Sofijska' Pekhotna Divizija"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 9 }
    name     = "2-a 'Trakijska' Pekhotna Divizija"
    location = 324
    division = {
      id             = { type = 19000 id = 10 }
      name           = "2-a Armija"
      type           = hq
      model          = 0
      strength       = 10
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 11 }
      name           = "I/2-a 'Trakijska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 12 }
      name           = "II/2-a 'Trakijska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 13 }
      name           = "III/2-a 'Trakijska' Pekhotna Divizija"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 14 }
    name     = "3-a 'Balkanska' Pekhotna Divizija"
    location = 325
    division = {
      id             = { type = 19000 id = 15 }
      name           = "I/3-a 'Balkanska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 16 }
      name           = "II/3-a 'Balkanska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 17 }
      name           = "III/3-a 'Balkanska' Pekhotna Divizija"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 18 }
    name     = "4-a 'Preslavska' Pekhotna Divizija"
    location = 326
    division = {
      id             = { type = 19000 id = 19 }
      name           = "I/4-a 'Preslavska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      extra          = cavalry_brigade
      brigade_model  = 1
      strength       = 15
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 20 }
      name           = "II/4-a 'Preslavska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 21 }
      name           = "III/4-a 'Preslavska' Pekhotna Divizija"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 22 }
    name     = "5-a 'Dunavska' Pekhotna Divizija"
    location = 317
    division = {
      id             = { type = 19000 id = 23 }
      name           = "3-a Armija"
      type           = hq
      model          = 0
      strength       = 10
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 24 }
      name           = "I/5-a 'Dunavska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 25 }
      name           = "II/5-a 'Dunavska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 26 }
      name           = "III/5-a 'Dunavska' Pekhotna Divizija"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 27 }
    name     = "6-a 'Bdinska' Pekhotna Divizija"
    location = 318
    division = {
      id             = { type = 19000 id = 28 }
      name           = "I/6-a 'Bdinska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      extra          = artillery
      brigade_model  = 0
      strength       = 15
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 29 }
      name           = "II/6-a 'Bdinska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 30 }
      name           = "III/6-a 'Bdinska' Pekhotna Divizija"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 31 }
    name     = "7-a 'Rilska' Pekhotna Divizija"
    location = 320
    division = {
      id             = { type = 19000 id = 32 }
      name           = "I/7-a 'Rilska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 33 }
      name           = "II/7-a 'Rilska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 34 }
      name           = "III/7-a 'Rilska' Pekhotna Divizija"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 35 }
    name     = "8-a 'Tundzhanska' Pekhotna Divizija"
    location = 322
    division = {
      id             = { type = 19000 id = 36 }
      name           = "I/8-a 'Tundzhanska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 37 }
      name           = "II/8-a 'Tundzhanska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 38 }
      name           = "III/8-a 'Tundzhanska' Pekhotna Divizija"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 39 }
    name     = "9-a 'Plevenska' Pekhotna Divizija"
    location = 323
    division = {
      id             = { type = 19000 id = 40 }
      name           = "I/9-a 'Plevenska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 41 }
      name           = "II/9-a 'Plevenska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
    division = {
      id             = { type = 19000 id = 42 }
      name           = "III/9-a 'Plevenska' Pekhotna Divizija"
      type           = infantry
      model          = 1
      strength       = 5
      experience     = 20
    }
  }
  landunit = {
    id       = { type = 19000 id = 43 }
    name     = "10-a 'Belomorska' Pekhotna Divizija"
    location = 319
    division = {
      id             = { type = 19000 id = 44 }
      name           = "I/10-a 'Belomorska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 10
    }
    division = {
      id             = { type = 19000 id = 45 }
      name           = "II/10-a 'Belomorska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 10
    }
  }
}
