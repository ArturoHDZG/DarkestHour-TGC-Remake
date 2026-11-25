##############################
# Country definition for HON #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = HON
  puppet             = USA
  ai                 = "Minors/HON_1914.ai"
  ai_settings        = { }
  capital            = 2085 # Tegucigalpa
  manpower           = 0
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ENG value = 50 }
    relation = { tag = GUA value = 100 }
    relation = { tag = NIC value = 100 }
    relation = { tag = SAL value = -15 }
    relation = { tag = USA value = 100 }
    relation = { tag = COS value = 50 }
    relation = { tag = SPA value = 50 }
    relation = { tag = U08 value = 50 }
    relation = { tag = PAN value = 50 }
  }
  SpyInfo                = { country = "HON" NumberOfSpies = 1 }

  nationalprovinces      = { 2084 2085 2086 2087 2088 2079 2080 2082 2081 2083 }
  ownedprovinces         = { 2084 2085 }
  controlledprovinces    = { 2084 2085 }

  techapps               = { 1010 1020 1160 6500 6510 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 5
    political_left    = 2
    freedom           = 4
    free_market       = 6
    professional_army = 2
    defense_lobby     = 5
    interventionism   = 4
  }
  headofstate            = { type = 9 id = 355090 } # Francisco Bertrand
  headofgovernment       = { type = 9 id = 355087 } # Francisco Bertrand
  foreignminister        = { type = 9 id = 355093 } # Jesús Bendaña
  armamentminister       = { type = 9 id = 355094 } # Leopoldo Córdova
  ministerofsecurity     = { type = 9 id = 355005 } # Carlos Alberto Ucles
  ministerofintelligence = { type = 9 id = 355099 } # Vicente Tosta Carrasco
  chiefofstaff           = { type = 9 id = 355095 } # Santiago Meza Calix
  chiefofarmy            = { type = 9 id = 355097 } # Vicente Tosta Carrasco
  chiefofnavy            = { type = 9 id = 355096 } # Santiago Meza Calix

  landunit = {
    id       = { type = 19500 id = 1 }
    name     = "Ejército de Honduras"
    location = 2085
    division = {
      id             = { type = 19500 id = 2 }
      name           = "1a. División"
      type           = infantry
      model          = 0
      strength       = 15
    }
  }
}
