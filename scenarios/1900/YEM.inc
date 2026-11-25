##############################
# Country definition for YEM #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = YEM
  puppet             = OTT
  ai                 = "Minors/YEM_1914.ai"
  ai_settings        = { }
  capital            = 1050 # Sanaa
  manpower           = 5
  # Resource Reserves
  energy         = 180
  metal          = 90
  rare_materials = 45
  oil            = 200
  supplies       = 200
  money          = 10
  SpyInfo                = { country = "YEM" NumberOfSpies = 1 }

  nationalprovinces      = { 1050 1051 1053 840 }
  ownedprovinces         = { 1050 }
  controlledprovinces    = { 1050 }

  techapps               = { 1010 1020 1160 6500 13060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 3
    political_left    = 4
    freedom           = 9
    free_market       = 8
    professional_army = 2
    defense_lobby     = 1
    interventionism   = 1
  }
  headofstate            = { type = 9 id = 445001 } # Yahya Muhammad Hamid ed-Din
  headofgovernment       = { type = 9 id = 445026 } # Mahmud Nedim Akdilek
  foreignminister        = { type = 9 id = 445003 } # Yahya Muhammad Hamid ed-Din
  armamentminister       = { type = 9 id = 445027 } # Yahya Muhammad Hamid ed-Din
  ministerofsecurity     = { type = 9 id = 445005 } # Yahya Muhammad Hamid ed-Din
  ministerofintelligence = { type = 9 id = 445028 } # Yahya Muhammad Hamid ed-Din
  chiefofstaff           = { type = 9 id = 445007 } # Yahya Muhammad Hamid ed-Din
  chiefofarmy            = { type = 9 id = 445029 } # Yahya Muhammad Hamid ed-Din

  landunit = {
    id       = { type = 15900 id = 1 }
    name     = "Zaydian army"
    location = 1050
    division = {
      id             = { type = 15900 id = 2 }
      name           = "Zaydian bodyguard"
      type           = cavalry
      model          = 0
      strength       = 10
      experience     = 20
    }
    division = {
      id             = { type = 15900 id = 3 }
      name           = "Yemeni tribes"
      type           = cavalry
      model          = 0
      strength       = 10
      experience     = 20
    }
  }
}
