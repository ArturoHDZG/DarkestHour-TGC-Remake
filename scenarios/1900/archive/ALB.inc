##############################
# Country definition for ALB #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = ALB
  flag_ext           = _14
  ai                 = "Minors/ALB_1914.ai"
  ai_settings        = { flags = { MOB1 = yes MOB2 = yes MOB3 = yes } }
  capital            = 359 # Tirana
  dissent            = 15
  manpower           = 1
  # Resource Reserves
  energy         = 240
  metal          = 120
  rare_materials = 60
  oil            = 500
  supplies       = 500
  money          = 10
  transports     = 100

  diplomacy = {
    relation = { tag = ITA value = 10 }
    relation = { tag = SER value = -100 }
    relation = { tag = MTN value = -10 }
    relation = { tag = OTT value = 50 }
    relation = { tag = GRE value = -50 }
    relation = { tag = USA value = 10 }
    relation = { tag = ENG value = 30 }
    relation = { tag = U08 value = -20 }
    relation = { tag = U09 value = -10 }
  }
  SpyInfo                = { country = "ALB" NumberOfSpies = 3 }

  nationalprovinces      = { 329 334 359 360 361 362 367 }
  ownedprovinces         = { 359 361 362 }
  controlledprovinces    = { 359 361 362 }

  techapps               = { 1010 1020 1160 1170 3010 3110 3210 5310 5800 6500 6510 8010 8020 8050 13060 13070 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 5
    free_market       = 7
    professional_army = 3
    defense_lobby     = 4
    interventionism   = 3
  }
  headofstate            = { type = 9 id = 285159 } # Mehmet Konica
  headofgovernment       = { type = 9 id = 285181 } # Ahmed Izzet
  foreignminister        = { type = 9 id = 285194 } # Esat Toptani
  armamentminister       = { type = 9 id = 285206 } # Filip Noga
  ministerofsecurity     = { type = 9 id = 285219 } # Aqif Elbasani
  ministerofintelligence = { type = 9 id = 285231 } # Hasan Prishtina
  chiefofstaff           = { type = 9 id = 285235 } # Aqif Elbasani
  chiefofarmy            = { type = 9 id = 285244 } # Ali Shefqeti
  chiefofnavy            = { type = 9 id = 285248 } # Qazim Koculi

  landunit = {
    id       = { type = 27000 id = 1 }
    name     = "Xhandarmëria Kombëtare"
    location = 359
    division = {
      id             = { type = 27000 id = 2 }
      name           = "1. Xhandarmëria"
      type           = militia
      model          = 0
      strength       = 40
      max_strength   = 100
      experience     = 5
    }
  }
}
