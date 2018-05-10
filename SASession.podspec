Pod::Spec.new do |s|
  s.name = 'SASession'
  s.version = '1.1.2'
  s.summary = 'Library that holds session data for SA'
  s.description = <<-DESC
      This library holds session data like production / conf, etc for SA
			DESC
  s.homepage = 'https://github.com/SuperAwesomeLTD/sa-mobile-lib-ios-session'
  s.license = { 
	:type => 'GNU GENERAL PUBLIC LICENSE Version 3', 
	:file => 'LICENSE' 
  }
  s.author = { 
	'Gabriel Coman' => 'gabriel.coman@superawesome.tv' 
  }
  s.source = { 
	:git => 'https://github.com/SuperAwesomeLTD/sa-mobile-lib-ios-session.git', 
	:branch => 'master',
	:tag => '1.1.2' 
  }
  s.ios.deployment_target = '8.0'
  s.dependency 'SAUtils', '1.5.5'
  s.source_files = 'Pod/Classes/**/*'
end
