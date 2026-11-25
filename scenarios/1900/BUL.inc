##############################
# Country definition for BUL #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = BUL
  ai                 = "Minors/BUL_1914.ai"
  ai_settings        = { }
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

  nationalprovinces      = { 318 323 325 324 321 319 326 364 317 331 307 322 328 333 365 366 }
  ownedprovinces         = { 317 318 319 321 322 323 324 325 326 }
  controlledprovinces    = { 317 318 319 321 322 323 324 325 326 }
  claimedprovinces       = { 334 385 }

  techapps               = { 1010 1020 1160 1170 3810 5310 5800 6500 6510 8010 8020 8050 8060 8070 8100 13060 13070 }

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
      id             = { type = 19000 id = 3 }
      name           = "Kavalerijska Divizija"
      type           = cavalry
      model          = 1
      strength       = 30
      experience     = 20
    }
  }

  
    landunit = {
    id       = { type = 19000 id = 9 }
    name     = "2-a 'Trakijska' Pekhotna Divizija"
    location = 324
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
  }

    landunit = {
    id       = { type = 19000 id = 18 }
    name     = "4-a 'Preslavska' Pekhotna Divizija"
    location = 326
    division = {
      id             = { type = 19000 id = 20 }
      name           = "II/4-a 'Preslavska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
  }

    landunit = {
    id       = { type = 19000 id = 22 }
    name     = "5-a 'Dunavska' Pekhotna Divizija"
    location = 317
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
  }

    landunit = {
    id       = { type = 19000 id = 27 }
    name     = "6-a 'Bdinska' Pekhotna Divizija"
    location = 318
    division = {
      id             = { type = 19000 id = 29 }
      name           = "II/6-a 'Bdinska' Pekhotna Divizija"
      type           = infantry
      model          = 2
      strength       = 20
      experience     = 20
    }
  }

    landunit = {
    id       = { type = 19000 id = 31 }
    name     = "7-a 'Rilska' Pekhotna Divizija"
    location = 321
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
