##############################
# Country definition for KOR #
# Empire of Korea (Daehan)   #
##############################

country = {
  tag                = KOR
  ai                 = "Minors/KOR_1914.ai"
  ai_settings        = { }
  capital            = 1228 # Seoul
  manpower           = 25
  # Resource Reserves
  energy         = 800
  metal          = 400
  rare_materials = 200
  oil            = 50
  supplies       = 500
  money          = 30
  transports     = 20

  diplomacy = {
    relation = { tag = RUS value = 75 }
    relation = { tag = UCH value = 50 }
    relation = { tag = FRA value = 40 }
    relation = { tag = ENG value = 25 }
    relation = { tag = USA value = 50 }
    relation = { tag = JAP value = -50 }
  }
  SpyInfo                = { country = "KOR" NumberOfSpies = 2 }

  nationalprovinces      = { 1221 1222 1223 1224 1225 1226 1227 1228 1229 1230 1231 1232 1233 }
  ownedprovinces         = { 1221 1222 1223 1224 1225 1226 1227 1228 1229 1230 1231 1232 1233 }
  controlledprovinces    = { 1221 1222 1223 1224 1225 1226 1227 1228 1229 1230 1231 1232 1233 }

  techapps               = { 1010 1160 3010 5010 6500 8010 13060 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 1
    political_left    = 3
    freedom           = 3
    free_market       = 4
    professional_army = 4
    defense_lobby     = 6
    interventionism   = 2
  }

  headofstate            = { type = 9 id = 265059 } # Gojong
  headofgovernment       = { type = 9 id = 265060 } # Yoon Yong-sun

  landunit = {
    id       = { type = 26500 id = 1 }
    name     = "Daehan Jeguk Siwidae"
    location = 1228
    division = {
      id             = { type = 26500 id = 2 }
      name           = "1st Imperial Guard Division"
      type           = infantry
      model          = 0
      strength       = 70
      experience     = 10
    }
    division = {
      id             = { type = 26500 id = 3 }
      name           = "Capital Guard Brigade"
      type           = cavalry
      model          = 0
      strength       = 50
    }
  }

  landunit = {
    id       = { type = 26500 id = 4 }
    name     = "Bukbu Jinwidae"
    location = 1221
    division = {
      id             = { type = 26500 id = 5 }
      name           = "Pyeongyang Garrison Division"
      type           = infantry
      model          = 0
      strength       = 60
    }
  }

  landunit = {
    id       = { type = 26500 id = 6 }
    name     = "Nambu Jinwidae"
    location = 1232
    division = {
      id             = { type = 26500 id = 7 }
      name           = "Busan Defense Brigade"
      type           = infantry
      model          = 0
      strength       = 50
    }
  }
}
